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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
const int maxn = 10005;
vi adj[maxn];
bool visited[maxn];
// Super is a cute girl
void dfs(int s, bool &can)
{
    if (visited[s])
        can = true;
    visited[s] = true;
    for (auto i : adj[s])
    {
        dfs(i, can);
    }
}
void solve()
{
    memset(visited, false, sizeof(visited));
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i + 1 < n)
            {
                if (a[i][j] == a[i + 1][j])
                {
                    adj[i * m + j + 1].pb((i + 1) * m + j + 1);
                    adj[(i + 1) * m + j + 1].pb(i * m + j + 1);
                }
            }
            if (j + 1 < m)
            {
                if (a[i][j] == a[i][j + 1])
                {
                    adj[i * m + j + 1].pb(i * m + j + 2);
                    adj[i * m + j + 2].pb(i * m + j + 1);
                }
            }
        }
    }
    bool can = false;
    dfs(1, can);
    if (can)
        cout << "Yes";
    else
        cout << "No";
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