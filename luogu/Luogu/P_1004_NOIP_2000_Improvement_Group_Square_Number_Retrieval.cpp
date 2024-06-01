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
    vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));

    int dp[n + 1][n + 1];
    int a, b, c;
    memset(dp, 0, sizeof(dp));
    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;

        v[a - 1][b - 1] = c;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] += v[i][j];
            dp[i][j] += max({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
        }
    }
    cout << dp[n][n];
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