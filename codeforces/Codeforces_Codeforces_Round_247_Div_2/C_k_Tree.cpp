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
    int n, k, d;
    cin >> n >> k >> d;
    vector<vl> dp(n + 1, vl(2, 0));
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k && i + j <= n; j++)
        {

            if (j >= d)
            {
                dp[i + j][1] += dp[i][0];
                dp[i + j][1] += dp[i][1];
                dp[i + j][1] %= mod;
            }
            else
            {
                dp[i + j][1] += dp[i][1];
                dp[i + j][0] += dp[i][0];
                dp[i + j][1] %= mod;
                dp[i + j][0] %= mod;
            }
        }
    }
    cout << dp[n][1] % mod << '\n';
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