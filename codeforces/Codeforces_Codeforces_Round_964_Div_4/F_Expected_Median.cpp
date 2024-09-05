// Problem: F. Expected Median
// Contest: Codeforces - Codeforces Round 964 (Div. 4)
// URL: https://codeforces.com/contest/1999/problem/F
// Memory Limit: 256 MB
// Time Limit: 3000 ms
//
// Powered by CP Editor (https://cpeditor.org)

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
const int maxn = 2e5 + 5;
ll fac[maxn];
ll inv[maxn];
ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
void factorial()
{
    fac[0] = 1;
    for (int i = 1; i <= 200000; i++)
    {
        fac[i] = fac[i - 1] * i;
        fac[i] %= mod;
    }
}
void inverses(long long p)
{
    inv[200000] = binpow(fac[200000], p - 2);
    for (int i = 200000; i >= 1; i--)
    {
        inv[i - 1] = inv[i] * i % p;
    }
}

ll choose(ll c, ll r)
{
    return fac[c] * inv[r] % mod * inv[c - r] % mod;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (int &i : v)
        cin >> i;
    ll ans = 0;
    vl cnt(2, 0);
    for (auto i : v)
        cnt[i]++;

    for (int i = k / 2 + 1; i <= k; i++)
    {
        ll xd = 1;
        if (i <= cnt[1])
            xd *= choose(cnt[1], i);
        else
            xd *= 0;
        xd %= mod;
        if (k - i <= cnt[0])
            xd *= choose(cnt[0], k - i);
        else
            xd *= 0;
        xd %= mod;

        ans += xd;
        ans %= mod;
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);

    cin.tie(0);
    factorial();
    inverses(mod);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}