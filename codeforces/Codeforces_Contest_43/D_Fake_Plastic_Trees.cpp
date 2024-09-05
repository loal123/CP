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
vector<pii> r;
vector<vi> adj;
vi ops;
int ans = 0;
vi p;
void dfs(int v, int l, int op)
{
    bool has = false;

    for (auto u : adj[v])
    {
        if (u != l)
        {
            has = 1;
            if (l != -1)
            {
                if (r[v].fi > r[u].se)
                {
                    dfs(u, v, op + 1);
                }
                else
                    dfs(u, v, op);
            }
            else
                dfs(u, v, op);
        }
        ops[v] = max(ops[v], ops[u]);
    }
    if (!has)
    {
        ops[v] = op;
    }
}
void solve()
{
    int n;
    cin >> n;
    adj = vector<vi>(n, vi());
    ops = vi(n);
    p = vi(n);
    r = vector<pii>(n);
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        x--;
        p[i] = x;
        adj[x].pb(i);
        adj[i].pb(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> r[i].fi >> r[i].se;
    }
    dfs(0, -1, 1);
    for (int i = 1; i < n; i++)
    {
        if (p[i] == 0)
        {
            ans += ops[i];
            if (r[0].fi > r[i].se)
                ans++;
        }
    }
    cout << ans << '\n';
    ans = 0;
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