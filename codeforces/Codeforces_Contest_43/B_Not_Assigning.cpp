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
map<pii, int> m;
vector<vi> adj;
void dfs(int v, int l, bool even)
{
    for (auto u : adj[v])
    {
        if (u != l)
        {
            m[{u, v}] = (even ? 2 : 3);
            m[{v, u}] = (even ? 2 : 3);
            dfs(u, v, !even);
            even = !even;
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    adj = vector<vi>(n, vi());
    vector<pii> v(n - 1);
    vi deg(n, 0);
    bool can = true;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
        deg[a]++;
        deg[b]++;
        v[i].fi = a, v[i].se = b;

        if (deg[a] >= 3 || deg[b] >= 3)
        {
            can = 0;
        }
    }
    if (!can)
    {
        cout << -1 << '\n';
        return;
    }
    m.clear();
    dfs(0, -1, 1);
    for (auto i : v)
    {
        cout << m[{i.fi, i.se}] << " ";
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