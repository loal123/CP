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
int t[4 * maxn];
void build(vi a, int v, int tl, int tr)
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
int query(int v, int tl, int tr, int l, int r)
{
    if (l > r)
        return INF;

    if (l == tl && r == tr)
        return t[v];
    int tm = (tl + tr) / 2;
    return min(query(v * 2, tl, tm, l, min(r, tm)), query(v * 2 + 1, tm + 1, tr, max(tm + 1, l), r));
}
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    build(v, 1, 0, n - 1);
    vl dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < query(1, 0, n - 1, 0, i - 1))
            dp[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (min(v[i], v[j]) == query(1, 0, n - 1, j, i))
                dp[i] += dp[j];
            dp[i] %= mod;
        }
    }
    ll ans = dp[n - 1];

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] < query(1, 0, n - 1, i + 1, n - 1))
            ans += dp[i];
        ans %= mod;
    }
    cout << ans % mod << '\n';
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