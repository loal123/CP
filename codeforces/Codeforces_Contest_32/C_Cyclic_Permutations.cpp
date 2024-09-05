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
void solve()
{
    int n;
    cin >> n;
    vl fac(n + 2);
    vl pow(n + 2);
    fac[1] = 1LL;
    pow[0] = 1LL;
    pow[1] = 2LL;
    for (ll i = 2; i <= n; i++)
    {
        fac[i] = fac[i - 1] * i;
        fac[i] %= mod;
        pow[i] = pow[i - 1] * 2LL;
        pow[i] %= mod;
    }

    cout << (fac[n] - pow[n - 1] + mod) % mod;
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