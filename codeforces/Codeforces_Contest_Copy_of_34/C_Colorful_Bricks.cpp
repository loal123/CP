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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll dp[n + 1][k + 1];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = m;
    for (int i = 1; i < n; i++)
    {
        for (int j = k; j >= 0; j--)
        {
            dp[i][j] = dp[i - 1][j];
            dp[i][j] %= mod;
            if (j > 0)
                dp[i][j] += (ll)dp[i - 1][j - 1] * (m - 1);
            dp[i][j] %= mod;
        }
    }
    cout << dp[n - 1][k];
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