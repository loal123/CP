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
    for (ll &i : v)
        cin >> i;

    vector<vl> dp(n + 1, vl(k + 1, INFF));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= k; j++)
        {
            ll mn = INFF;

            for (int d = 0; d + j <= k && i + d < n; d++)
            {
                mn = min(mn, v[i + d]);
                dp[i + d + 1][j + d] = min(dp[i + d + 1][j + d], dp[i][j] + mn * (d + 1));
            }
        }
    }
    cout << *min_element(all(dp[n])) << '\n';
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