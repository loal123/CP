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
int t, k;
vl dp(3e5 + 5);
vl pref(2e5 + 2);

void solve()
{
    int a, b;
    cin >> a >> b;

    cout << (pref[b] - pref[a - 1] + mod) % mod << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    cin >> t >> k;
    dp[0] = 1;
    for (int i = 0; i <= 2e5; i++)
    {
        dp[i + 1] += dp[i];
        dp[i + 1] %= mod;
        if (i + k <= 2e5)
        {
            dp[i + k] += dp[i];
            dp[i + k] %= mod;
        }
    }

    for (int i = 1; i <= 2e5 + 1; i++)
    {
        pref[i] = pref[i - 1] + dp[i];
        pref[i] %= mod;
    }

    while (t--)
        solve();
}