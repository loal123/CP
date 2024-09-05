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
    int dp[n + 1][k + 1][3];
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= k; j++)
        {
            for (int c = 0; c <= 2; c++)
            {
                if (i == 0 && j == 0)
                    dp[i][j][c] = 0;
                else
                    dp[i][j][c] = -INF;
            }
        }
    }
    vector<char> c(n);
    map<char, int> m;
    m['H'] = 0;
    m['P'] = 1;
    m['S'] = 2;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= k && j <= n; j++)
        {
            for (int l = 0; l < 3; l++)
            {
                for (int r = 0; r < 3; r++)
                {
                    if (l == m[c[i - 1]])
                    {
                        if (l == r)
                        {
                            dp[i][j][l] = max(dp[i][j][l], dp[i - 1][j][r] + 1);
                        }
                        else
                        {
                            if (j > 0)
                            {
                                dp[i][j][l] = max(dp[i][j][l], dp[i - 1][j - 1][r] + 1);
                            }
                        }
                    }
                    else
                    {
                        if (l == r)
                        {
                            dp[i][j][l] = max(dp[i][j][l], dp[i - 1][j][r]);
                        }
                        else
                        {
                            if (j > 0)
                            {
                                dp[i][j][l] = max(dp[i][j][l], dp[i - 1][j - 1][r]);
                            }
                        }
                    }
                }
            }
        }
    }
    int ans = 0;
    for (int j = 0; j <= k; j++)
    {
        for (int l = 0; l < 3; l++)
        {
            ans = max(ans, dp[n][j][l]);
        }
    }
    cout << ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    // int t; cin >> t; while(t--)
    solve();
}