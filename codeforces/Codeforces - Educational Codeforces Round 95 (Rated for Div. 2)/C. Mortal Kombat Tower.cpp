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
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> dp(2, vi(n + 1, INF));
    dp[1][0] = 0;
    for (int i = 0; i < n; i++)
    {
        dp[0][i + 1] = min(dp[0][i + 1], dp[1][i] + v[i]);
        dp[1][i + 1] = min(dp[1][i + 1], dp[0][i]);

        if (i + 2 <= n)
        {
            dp[0][i + 2] = min(dp[0][i + 2], dp[1][i] + v[i] + v[i + 1]);
            dp[1][i + 2] = min(dp[1][i + 2], dp[0][i]);
        }
    }
    cout << min(dp[0][n], dp[1][n]) << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}