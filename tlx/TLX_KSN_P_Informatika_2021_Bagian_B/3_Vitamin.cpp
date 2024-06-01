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
struct informasi
{
    int h, k, d;
};
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<informasi> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].h >> v[i].k >> v[i].d;
    }
    int dp[n + 5][m + 5];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        for (int k = m; k >= 0; k--)
        {
            dp[i][k] = max(dp[i - 1][k], dp[i][k]);
            if (v[i - 1].d == 0)
            {

                if (k - v[i - 1].h >= 0)
                {
                    dp[i][k - v[i - 1].h] = max(dp[i][k - v[i - 1].h], dp[i][k] + v[i - 1].k);
                }
            }
            else
            {

                if (k - v[i - 1].h >= 0)
                {
                    dp[i][k - v[i - 1].h] = max(dp[i][k - v[i - 1].h], dp[i - 1][k] + v[i - 1].k);
                }
            }
        }
    }
    int ans = -1;
    for (int i = 0; i <= m; i++)
    {
        ans = max(ans, dp[n][i]);
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