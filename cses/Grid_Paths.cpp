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
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    ll dp[n + 1][n + 1];
    char a[n][n];
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i][j] %= mod;
            if (j == 0 && i == 0)
            {
                dp[i][j] = a[i][j] == '.';
            }
            if (i + 1 < n)
            {
                if (a[i + 1][j] == '.')
                    dp[i + 1][j] += dp[i][j];
            }
            if (j + 1 < n)
            {
                if (a[i][j + 1] == '.')
                    dp[i][j + 1] += dp[i][j];
            }
        }
    }
    cout << dp[n - 1][n - 1];
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