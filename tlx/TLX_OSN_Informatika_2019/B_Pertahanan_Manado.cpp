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
const int maxn = 1 << 18;
vector<pll> adj[maxn];
ll t[2 * maxn];
void build(vl a, int v, int tl, int tr)
{
    if (tl == tr)
    {
        t[v] = a[tl];
    }
    else
    {
        int tm = (tl + tr) / 2;
        build(a, v * 2, tl, tm);
        build(a, v * 2 + 1, tm + 1, tr);
        t[v] = min(t[v * 2], t[v * 2 + 1]);
    }
}
ll query(ll v, ll l, ll r, ll tl, ll tr)
{
    if (r < tl || l > tr)
        return INFF;
    if (tl >= l && tr <= r)
        return t[v];
    ll tm = (tl + tr) / 2;
    return min(query(v * 2, l, r, tl, tm), query(v * 2 + 1, l, r, tm + 1, tr));
}
void update(int v, int tl, int tr, int pos, ll val)
{
    if (tl == tr)
    {
        t[v] = val;
    }
    else
    {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v * 2, tl, tm, pos, val);
        else
            update(v * 2 + 1, tm + 1, tr, pos, val);
        t[v] = min(t[v * 2], t[v * 2 + 1]);
    }
}
void solve()
{
    ll n, m, s;
    cin >> n >> m >> s;
    vl dp(n + 1, INFF);

    dp[0] = 0;
    build(dp, 1, 0, n);
    for (int i = 0; i < m; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[b].pb({a, c});
    }
    for (int i = 1; i <= n; i++)
    {
        ll prev = dp[i];
        dp[i] = min(dp[i - 1] + s, dp[i]);

        for (auto u : adj[i])
        {
            ll prev = dp[i];
            ll xd = query(1, u.fi - 1, i, 0, n);
            dp[i] = min(xd + u.se, dp[i]);
        }
        if (prev != dp[i])
            update(1, 0, n, i, dp[i]);
    }
    cout << dp[n];
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