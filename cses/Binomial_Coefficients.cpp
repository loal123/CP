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
const int maxn = 1e6;
ll fac[maxn + 1];
ll inv[maxn + 1];
ll exp(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b > 0)
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
    for (int i = 1; i <= maxn; i++)
    {
        fac[i] = fac[i - 1] * i % mod;
    }
}
void inverses()
{
    inv[maxn] = exp(fac[maxn], mod - 2);
    for (int i = maxn; i >= 1; i--)
    {
        inv[i - 1] = inv[i] * i % mod;
    }
}
ll ncr(ll n, ll r)
{
    return fac[n] * inv[r] % mod * inv[n - r] % mod;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << ncr(a, b) << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    factorial();
    inverses();
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}