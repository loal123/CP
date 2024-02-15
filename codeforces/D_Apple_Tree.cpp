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
const int maxn = 50;

void dfs(int s, vl adj[], bool vis[], ll leaf[])
{
    vis[s] = true;
    for (auto i : adj[s])
    {
        if (!vis[i])
        {
            dfs(i, adj, vis, leaf);
            leaf[s] += leaf[i];
        }
    }
}
void solve()
{

    ll n;
    cin >> n;
    vl adj[n];
    bool vis[n];
    ll leaf[n];
    memset(leaf, 0, sizeof(leaf));
    memset(vis, 0, sizeof(vis));

    for (ll i = 0; i < n - 1; i++)
    {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;

        adj[a].pb(b);

        adj[b].pb(a);
    }
    for (ll i = 0; i < n; i++)
    {
        if (adj[i].size() == 1 && i != 0)
            leaf[i] = 1;
        else
            leaf[i] = 0;
    }
    dfs(0, adj, vis, leaf);
    ll q;
    cin >> q;

    while (q--)
    {
        ll u, v;
        cin >> u >> v;
        u--;
        v--;
        cout << (ll)leaf[u] * leaf[v] << endl;
    }
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