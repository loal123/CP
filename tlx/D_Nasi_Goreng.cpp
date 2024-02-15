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
// Super is the cutest girl
char a[305][305];
bool vis[305][305];
int memo[305][305][3];
int n, m;
int floodfill(int i, int j, int counts, int last)
{
    if (i == n - 1 && j == m - 1)
        return counts;
    if ((i < 0 || i >= n || j < 0 || j >= m) || a[i][j] == '#')
        return INF;

    if (last == -1)
    {
        memo[i + 1][j][0] = min(counts, memo[i + 1][j][0]);
        memo[i][j + 1][1] = min(counts, memo[i + 1][j][1]);

        return min(floodfill(i + 1, j, counts, 0), floodfill(i, j + 1, counts, 1));
    }
    else if (last == 0)
    {
        return min(floodfill(i + 1, j, counts, 0), floodfill(i, j + 1, counts + 1, 1));
    }
    else
        return min(floodfill(i + 1, j, counts + 1, 0), floodfill(i, j + 1, counts, 1));
}
void solve()
{
    memset(vis, 0, sizeof(vis));

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << floodfill(0, 0, 0, -1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}