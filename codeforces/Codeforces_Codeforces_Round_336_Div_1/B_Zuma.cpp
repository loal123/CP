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
    int n;
    cin >> n;
    int dp[n + 1][n + 1];
    vi v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= n; j++)
            dp[i][j] = INF;
    }

    for (int l = n - 1; l >= 0; l--)
    {
        for (int r = l; r < n; r++)
        {
            if (l == r)
            {
                dp[l][r] = 1;
                continue;
            }
            if (l + 1 == r)
            {
                if (v[l] == v[r])
                    dp[l][r] = 1;
                else
                    dp[l][r] = 2;

                continue;
            }
            for (int k = l; k < r; k++)
            {
                dp[l][r] = min(dp[l][r], dp[l][k] + dp[k + 1][r]);
            }
            if (v[l] == v[r])
                dp[l][r] = min(dp[l][r], dp[l + 1][r - 1]);
        }
    }
    cout << dp[0][n - 1];
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