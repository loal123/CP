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
const int MAXN = 1e5;

long long fac[MAXN + 1];
long long inv[MAXN + 1];

/** Computes x^n modulo m in O(log p) time. */
long long exp(long long x, long long n, long long m)
{
    x %= m; // note: m * m must be less than 2^63 to avoid ll overflow
    long long res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            res = res * x % m;
        }
        x = x * x % m;
        n /= 2;
    }
    return res;
}

/** Precomputes n! from 0 to MAXN. */
void factorial(long long p)
{
    fac[0] = 1;
    for (int i = 1; i <= MAXN; i++)
    {
        fac[i] = fac[i - 1] * i % p;
    }
}

/**
 * Precomputes all modular inverse factorials
 * from 0 to MAXN in O(n + log p) time
 */
void inverses(long long p)
{
    inv[MAXN] = exp(fac[MAXN], p - 2, p);
    for (int i = MAXN; i >= 1; i--)
    {
        inv[i - 1] = inv[i] * i % p;
    }
}

/** Computes nCr mod p */
long long choose(long long n, long long r, long long p)
{
    return fac[n] * inv[r] % p * inv[n - r] % p;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    ll counts[m];
    factorial(mod);
    inverses(mod);

    memset(counts, 0, sizeof(counts));

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        counts[a[i] % m]++;
    }
    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (counts[i] > 1)
        {
            ll currently = counts[i];
            for (ll j = 2; j <= counts[i]; j++)
            {
                ans += choose(counts[i], j, mod);
                ans %= mod;
            }
        }
    }
    cout << ans;
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