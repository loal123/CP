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
    int n, m;
    cin >> n >> m;
    ll a[n];
    ll b[n];
    ll dp[3][n + 2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <= n; j++)
            dp[i][j] = INFF;
    }
    dp[0][n] = 0;
    dp[1][n] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        dp[0][i] = min(dp[0][i], dp[0][i + 1] + a[i]);
        dp[1][i] = min(dp[1][i], dp[0][i + 1] + b[i]);
        dp[0][i] = min(dp[0][i], dp[1][i + 1] + a[i]);
        dp[1][i] = min(dp[1][i], dp[1][i + 1] + b[i]);
    }
    ll mini = INFF;
    for (int i = 0; i < m; i++)
    {
        mini = min(dp[0][i], mini);
    }
    cout << mini << '\n';
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