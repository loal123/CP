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
    ll n, k;
    cin >> n >> k;
    ll dp[n * 2 + 1];
    ll counts = pow2(k);

    dp[1] = k;
    dp[2] = counts;

    for (int i = 3; i <= n * 2 + 1; i++)
    {
        dp[i] = (ll)(counts * dp[i - 2]) % mod;
    }
    ll ans = 0;
    for (int i = 2 + n - 1; i <= 2 * n; i++)
    {
        ans += dp[i];
        ans %= mod;
    }

    cout << ans;

    // 2
    // 4
    // 2 + 1
    // 2 + 2
}
//
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}