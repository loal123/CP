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
const int maxn = 1e5 + 5;
ll dp[maxn][105];
// Super is the cutest girl
void solve()
{
    ll n, m;
    cin >> n >> m;

    ll a[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= m; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != 0)
        {
            if (a[i] - 1 > 0)
                dp[i][a[i]] = dp[i - 1][a[i] - 1];
            dp[i][a[i]] = dp[i - 1][a[i]];
            if (a[i] + 1 <= m)
                dp[i + 1][a[i] + 1] = dp[i + 1][a[i]];
        }
        else
        {
            for (int j = 1; j <= m; j++)
            {
                dp[i][j] += dp[i - 1][j];
                if (j + 1 <= m)
                {
                    dp[i][j] += dp[i - 1][j + 1];
                }
                if (j - 1 > 0)
                    dp[i][j] += dp[i - 1][j - 1];
            }
        }
    }
    ll ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans += dp[n][i];
        ans %= m;
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