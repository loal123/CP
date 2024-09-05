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
    int n, k;
    cin >> n >> k;
    ll dp[n + 1][n + 1][2];
    memset(dp, 0, sizeof(dp));
    dp[k][k][0] = 1;
    dp[k][k][1] = 1;
    if (k == n)
    {
        cout << 1 << endl;
        return;
    }

    for (int i = k; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int curr = 1; curr <= n - i; curr++)
            {
                if (curr > j && i + curr <= n)
                {
                    dp[i + curr][curr][0] += dp[i][j][1];
                    dp[i + curr][curr][0] %= mod;
                }
                else if (curr < j && i + curr <= n)
                {
                    dp[i + curr][curr][1] += dp[i][j][0];
                    dp[i + curr][curr][1] %= mod;
                }
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans += dp[n][i][0];
        ans %= mod;
        ans += dp[n][i][1];
        ans %= mod;
    }
    cout << ans << '\n';
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