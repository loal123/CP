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
    int n, k;
    cin >> n >> k;
    int dp[2][n + k + 1];
    memset(dp, 0, sizeof(dp));

    dp[0][0] = 0;
    int pref[n + 1];
    pref[0] = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }
    bool b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i])
        {
            dp[0][i + 1] = dp[0][i] + a[i];
            dp[1][i + 1] = max(dp[1][i + 1], dp[1][i] + a[i]);
        }

        else
        {
            if (i + k <= n)
                dp[1][i + k] = max(dp[1][i + k], dp[0][i] + pref[i + k] - pref[i]);
        }
        dp[0][i + 1] = max(dp[0][i], dp[0][i + 1]);
        dp[1][i + 1] = max(dp[1][i + 1], dp[1][i]);
    }
    cout << dp[1][n];
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