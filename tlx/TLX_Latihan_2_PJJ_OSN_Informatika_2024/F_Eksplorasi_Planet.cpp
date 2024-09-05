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
const int maxn = 2e5 + 1;
vector<pll> v(maxn);
vector<vi> e(maxn);
// Super is the cutest girl
ll fac[maxn + 2];
ll inv[maxn + 2];
vector<bool> vis(maxn, 0);
ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        res %= mod;
        a = a * a;
        a %= mod;
        b >>= 1;
    }
    return res;
}
void factorial()
{
    fac[1] = 1LL;
    for (ll i = 2; i <= maxn; i++)
    {
        fac[i] = fac[i - 1] * i;
        fac[i] %= mod;
    }
}
void inverses()
{
    inv[maxn] = binpow(fac[maxn], mod - 2);
    for (ll i = maxn; i >= 1; i--)
        inv[i - 1] = inv[i] * i % mod;
}
ll choose(ll n, ll r)
{
    return fac[n] * inv[r] % mod * inv[n - r] % mod;
}
ll curr = 0;
void dfs(int node)
{
    if (vis[node])
        return;
    vis[node] = 1;
    curr += choose(v[node].fi + v[node].se, v[node].fi);
    curr %= mod;
    for (auto neigh : e[node])
        dfs(neigh);
}
void solve()
{
    factorial();
    inverses();
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi >> v[i].se;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        e[a].pb(b);
        e[b].pb(a);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            curr = 0;
            dfs(i);
            cout << curr << '\n';
        }
    }
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