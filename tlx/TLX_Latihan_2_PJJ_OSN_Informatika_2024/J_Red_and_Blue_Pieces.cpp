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
const int maxn = 306;

// Super is the cutest girl
void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    if (n > m)
    {
        vector<vector<vi>> dp(n, vector<vi>(m, vi(m, -INF)));
        vector<vi> v(n, vi(m, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> v[i][j];
        }
        dp[0][0][0] = v[0][0];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                for (int k = 0; k < m && k <= i + j; k++)
                {
                    if (i + j - k >= n)
                        continue;
                    if (i > 0)
                    {
                        if (k > 0)
                            dp[i][j][k] = max(dp[i - 1][j][k - 1], dp[i][j][k]);

                        dp[i][j][k] = max(dp[i - 1][j][k], dp[i][j][k]);
                    }
                    if (j > 0)
                    {
                        if (k > 0)
                        {
                            dp[i][j][k] = max(dp[i][j - 1][k - 1], dp[i][j][k]);
                        }
                        dp[i][j][k] = max(dp[i][j - 1][k], dp[i][j][k]);
                    }
                    if (i != 0 || j != 0)
                        dp[i][j][k] += v[i][j];
                    if (j != k)
                    {
                        dp[i][j][k] += v[i + j - k][k];
                    }
                    else if (i != 0 || j != 0)
                        dp[i][j][k] += (v[i + j - k][k] ^ x);
                }
            }
        }
        cout << dp[n - 1][m - 1][m - 1] << '\n';
        return;
    }
    else
    {

        vector<vector<vi>> dp(n, vector<vi>(m, vi(n, -INF)));
        vector<vi> v(n, vi(m, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> v[i][j];
        }
        dp[0][0][0] = v[0][0];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                for (int k = 0; k < n && k <= i + j; k++)
                {
                    if (i + j - k >= m)
                        continue;
                    if (i > 0)
                    {
                        if (k > 0)
                            dp[i][j][k] = max(dp[i - 1][j][k - 1], dp[i][j][k]);

                        dp[i][j][k] = max(dp[i - 1][j][k], dp[i][j][k]);
                    }
                    if (j > 0)
                    {
                        if (k > 0)
                        {
                            dp[i][j][k] = max(dp[i][j - 1][k - 1], dp[i][j][k]);
                        }
                        dp[i][j][k] = max(dp[i][j - 1][k], dp[i][j][k]);
                    }
                    if (i != 0 || j != 0)
                        dp[i][j][k] += v[i][j];
                    if (i != k)
                    {
                        dp[i][j][k] += v[k][i + j - k];
                    }
                    else if (i != 0 || j != 0)
                        dp[i][j][k] += (v[k][i + j - k] ^ x);
                }
            }
        }
        cout << dp[n - 1][m - 1][n - 1] << '\n';
    }
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