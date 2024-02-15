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
const int maxn = 30005;
vector<vector<pair<ll, ll>>> adj(maxn);
bool vis[maxn];
ll n, m;
bool has = false;
ll ans = INFF;
void dfs(ll s, ll counts)
{
    ll real = INF;
    if (s == n - 1)
    {
        ans = counts;
    }

    vis[s] = true;
    for (auto i : adj[s])
    {

        if (!vis[i.fi])
        {

            dfs(i.fi, counts + i.se);
        }
    }
}
void solve()
{

    memset(vis, 0, sizeof(vis));

    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        adj[--a].pb(mp(--b, w));
        adj[b].pb(mp(a, -w));
    }
    ll counts = 0;
    dfs(0, counts);
    cout << (ans != INFF ? abs(ans) : -1);
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