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
const int maxn = 1e5 + 5;
vl v(maxn);
ll mini = INF;
vi adj[maxn];
vector<bool> vis(maxn, 0);
void dfs(int node)
{
    if (vis[node])
        return;
    vis[node] = 1;
    mini = min(mini, v[node]);
    for (auto neigh : adj[node])
    {
        dfs(neigh);
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            mini = INF;
            dfs(i);
            ans += mini;
        }
    }
    cout << ans << '\n';
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