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
    vector<double> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<double> dp(n + 1, 0);

    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j >= 0; j--)
        {
            if (j == 0)
            {
                dp[j] = dp[j] * (1 - v[i]);
            }
            else
                dp[j] = dp[j - 1] * v[i] + dp[j] * (1 - v[i]);
        }
    }
    /*
    dp[0] = 0.7;
    dp[1] = 0.30;
    dp[2] = 0;
    dp[3] = 0;;

    dp[0] = 1
    0 1
    dp[1] = 1 * 0.30 + 0
    dp[0] = 0.7

    dp[2] =

    */
    double ans = 0;
    for (int i = 0; i < n + 1; i++)
    {
        int tails = n - i;
        if (tails < i)
            ans += dp[i];
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