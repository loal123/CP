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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
vector<vector<pll>> adj;
vector<bool> vis;
vl dist;
void dfs(int node)
{
    if (vis[node])
        return;

    vis[node] = 1;

    for (auto neigh : adj[node])
    {
        dist[neigh.fi] = dist[node] + neigh.se;
        dfs(neigh.fi);
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    dist = vl(n, 0);
    adj = vector<vector<pll>>(n);
    vis = vector<bool>(n);

    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;

        adj[--a].pb({--b, w});

        adj[b].pb({a, -w});
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (auto j : adj[i])
        {
            if (dist[j.fi] != dist[i] + j.se)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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