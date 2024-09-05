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
vector<bool> vis;
vi dist;
vi dp;
vector<vi> adj;
// Super is the cutest girl
void dfs(int v)
{
    if (vis[v])
        return;
    vis[v] = 1;
    dp[v] = dist[v];
    for (auto u : adj[v])
    {
        if (dist[u] > dist[v] && !vis[u])
        {
            dfs(u);
        }
        if (dist[u] > dist[v])
        {
            dp[v] = min(dp[u], dp[v]);
        }
        else
            dp[v] = min(dp[v], dist[u]);
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    dist = vi(n, -1);
    dp = vi(n);
    vis = vector<bool>(n);
    adj = vector<vi>(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
    }
    queue<int> q;

    q.push(0);
    dist[0] = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        if (vis[v])
            continue;
        vis[v] = 1;
        for (auto u : adj[v])
        {
            if (dist[u] == -1)
                dist[u] = dist[v] + 1;

            q.push(u);
        }
    }
    vis = vector<bool>(n);
    dfs(0);
    for (int i = 0; i < n; i++)
    {
        cout << dp[i] << " ";
    }
    cout << '\n';
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