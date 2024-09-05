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
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<vi>> dp(n + 1, vector<vi>(m + 1, vi(k + 1, -INF)));

    vi v(n);
    dp[0][m][k] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            for (int b = 0; b <= k; b++)
            {
                if (b > 0)
                    dp[i + 1][j][b - 1] = max(dp[i + 1][j][b - 1], dp[i][j][b] + 1);
                if (j >= v[i])
                {
                    dp[i + 1][j - v[i]][b] = max(dp[i + 1][j - v[i]][b], dp[i][j][b] + 1);
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            for (int b = 0; b <= k; b++)
            {
                ans = max(ans, dp[i][j][b]);
            }
        }
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