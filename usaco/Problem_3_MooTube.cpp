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
// Super is a cute girl
const int maxn = 5005;
vector<pii> adj[maxn];
vector<bool> vis;
int counts = 0;
void dfs(int s, int curr, int k)
{
    vis[s] = true;
    if (curr >= k)
        counts++;
    for (auto i : adj[s])
    {
        if (!vis[i.fi])
            dfs(i.fi, min(curr, i.se), k);
    }
}
void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[--a].pb(mp(--b, w));
        adj[b].pb(mp(a, w));
    }
    for (int i = 0; i < q; i++)
    {
        int k, v;
        cin >> k >> v;
        vis.assign(n, false);
        counts = 0;
        dfs(v - 1, INF, k);
        cout << counts - 1 << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("mootube.in", "r", stdin);
    freopen("mootube.out", "w", stdout);
    // int t; cin >> t; while(t--)
    solve();
}