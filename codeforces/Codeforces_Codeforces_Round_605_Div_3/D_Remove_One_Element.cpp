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
    int a[n];
    int dp[2][n + 1];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i][j] = 1;
        }
    }
    dp[0][0] = 1;
    dp[0][0] = 1;
    dp[1][0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (i < n - 2)
        {
            if (a[i] < a[i + 2])
                dp[1][i + 2] = max(dp[1][i + 2], dp[0][i] + 1);
        }
        if (a[i] < a[i + 1])
        {
            dp[0][i + 1] = max(dp[0][i + 1], dp[0][i] + 1);
            dp[1][i + 1] = max(dp[1][i + 1], dp[1][i] + 1);
        }
        else
        {
            dp[0][i] = max(dp[0][i], 1);
            dp[1][i] = max(dp[1][i], 1);
        }
    }
    int maxi = 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            maxi = max(dp[i][j], maxi);
        }
    }
    cout << maxi;
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