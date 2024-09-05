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
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int dp[n + 2][3];
    memset(dp, 0, sizeof(dp));
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
        if (a[i] == 1 || a[i] == 3)
        {
            dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + 1;
        }
        if (a[i] == 2 || a[i] == 3)
        {
            dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + 1;
        }
    }
    cout << n - max({dp[n][0], dp[n][1], dp[n][2]});
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