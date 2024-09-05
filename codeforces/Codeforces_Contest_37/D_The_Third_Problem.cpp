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
const int MAXN = 1e6;

long long fac[MAXN + 1];
long long inv[MAXN + 1];

/** @return x^n modulo m in O(log p) time. */
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

/** @return nCr mod p */
long long choose(long long n, long long r, long long p)
{
    return fac[n] * inv[r] % p * inv[n - r] % p * fac[r] % p;
}
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    vi pos(n + 1);
    ll ans = 1;
    bool has = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pos[v[i]] = i;
    }
    int l = pos[0], r = pos[0];

    ll curr = 0;
    ll prev = 0;
    ll fel = 0;
    int prevl, prevr;
    for (int i = 1; i < n; i++)
    {
        if (l == 0 && r == n - 1)
        {
            fel = n - i;
            has = 1;
            break;
        }
        if (pos[i] < l)
        {
            fel += l - pos[i] - 1;

            if (curr >= 1)
            {
                ans *= choose(prev, curr, mod);
                // cout << ans << '\n';
                // cout << prev << " " << curr << '\n';
                ans %= mod;
            }
            curr = 0;
            prev = l - pos[i] - 1;
            l = pos[i];
            prevl = l;
            prevr = pos[0];
        }
        else if (pos[i] > r)
        {
            fel += pos[i] - r - 1;

            if (curr >= 1)
            {
                ans *= choose(prev, curr, mod);
                // cout << ans << '\n';
                // cout << prev << " " << curr << " ";

                ans %= mod;
            }
            curr = 0;
            prev = pos[i] - r - 1;
            r = pos[i];
            prevr = r;
            prevl = pos[0];
        }
        else
        {
            if (pos[i] >= prevl && pos[i] <= prevr)
            {
                curr++;
                fel--;
            }
            // cout << "stuck\n";
        }
        // cout << "fel: " << fel << '\n';
    }
    if (fel > 0 && has)
    {

        ans *= fac[fel];
        ans %= mod;
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    factorial(mod);
    inverses(mod);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}