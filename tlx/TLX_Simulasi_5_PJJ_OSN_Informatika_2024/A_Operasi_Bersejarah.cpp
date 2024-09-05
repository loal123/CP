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
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    string s;
    cin >> s;

    int mid;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            mid = i - 1;
        }
    }
    vector<vector<vl>> dp(n + 1, vector<vl>(n + 1, vl(4, INFF)));
    vector<vl> dp2(n + 1, vl(n + 1, INFF));

    dp[0][0][1] = 0;
    dp2[0][0] = 0;
    dp[n - 1][1][2] = 0;
    dp[n][0][2] = 0;

    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j <= n; j++)
        {
            if (s[i] == 'L')
            {
                dp[i][j][1] = min(dp[i][j][1], dp[i - 1][j][1] + (v[i] - v[i - 1]));
            }
            else
            {
                if (j > 0)
                    dp[i][j][1] = min(dp[i][j][1], dp[i - 1][j - 1][1]);
                dp[i][j][1] = min(dp[i][j][1], dp[i - 1][j][1] + v[i] - v[i - 1]);
            }
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s[i] == 'R')
            {
                dp[i][j][2] = min(dp[i][j][2], dp[i + 1][j][2] + (v[i + 1] - v[i]));
            }
            else
            {
                dp[i][j][2] = min(dp[i][j][2], dp[i + 1][j - 1][2]);
                dp[i][j][2] = min(dp[i][j][2], dp[i + 1][j][2] + v[i + 1] - v[i]);
            }
        }
    }
    pll ans = {INFF, INFF};
    for (int j = 0; j <= n; j++)
    {
        if (j <= INFF)
        {

            if (dp[0][j][2] <= k)
            {
                if (j < INFF)
                {
                    ans.fi = j;
                    ans.se = dp[0][j][2];
                }
                else
                    ans.se = min(ans.se, dp[0][j][2]);
            }
            if (dp[n - 1][j][1] <= k)
            {
                if (j < INFF)
                {
                    ans.fi = j;
                    ans.se = dp[n - 1][j][1];
                }
                else
                    ans.se = min(ans.se, dp[n - 1][j][1]);
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = )
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