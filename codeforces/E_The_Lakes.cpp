#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// Super is the cutest girl
const int maxn = 1005;
vector<vector<bool>> vis;
vector<vector<int>> a;
void dfs(int i, int j, int n, int m, int &counts)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return;

    if (vis[i][j] || a[i][j] == 0)
        return;

    vis[i][j] = true;
    counts += a[i][j];
    for (int d = 0; d < 4; d++)
    {
        dfs(dx[d] + i, dy[d] + j, n, m, counts);
    }
}
void solve()
{

    int n, m;
    cin >> n >> m;
    a.resize(n, vi(m));
    vis.resize(n, vector<bool>(m, 0));
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int z;
            cin >> z;
            a[i][j] = z;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > 0 && !vis[i][j])
            {
                int counts = 0;
                dfs(i, j, n, m, counts);
                maxi = max(counts, maxi);
            }
        }
    }
    cout << maxi << endl;
    vis.clear();
    a.clear();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}