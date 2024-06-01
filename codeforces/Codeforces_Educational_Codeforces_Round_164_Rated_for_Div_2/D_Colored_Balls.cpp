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
const ll mod = 998244353;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;

// Super is the cutest girl
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    vl dp(s + 1);
    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = s - a[i]; j >= 0; j--)
        {
            dp[j + a[i]] = (dp[j + a[i]] + dp[j]) % mod;
        }
    }
    ll ans = 0;

    for (int i = 0; i <= s; i++)
    {
        ans += ((((i + 1) / 2)) * dp[i]) % mod;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i]; j++)
        {

            ans += (dp[j] * (a[i] - (a[i] + j + 1) / 2)) % mod;
            ans %= mod;
        }
    }

    cout << ans << endl;

    // 1 3 3 7

    // 14  4
    // 3  1,2
    // 3  1,3
    // 7  1,4
    // 3  2,3
    // 7  2,4
    // 7    3,4
    // 4  1,2,3
    // 7  1,2,4
    // 7  1,3,4
    // 7  2,3,4
    // 7   1,2,3,4

    // 2 3 4 5
    // 0 1 4 5
    //

    //
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