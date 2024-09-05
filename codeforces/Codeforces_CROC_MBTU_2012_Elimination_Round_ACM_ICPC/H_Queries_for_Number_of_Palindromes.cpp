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
string s;
int n;
void solve()
{

    cin >> s;
    n = SZ(s);
    int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));

    bool can[n + 1][n + 1];
    memset(can, 0, sizeof(can));
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 1;
        if (i < n - 1)
        {
            if (s[i] == s[i + 1])
            {
                dp[i][i + 1] = 3;
                can[i][i + 1] = 1;
            }
            else
                dp[i][i + 1] = 2;
        }

        can[i][i] = 1;
    }
    for (int k = 3; k <= n; k++)
    {
        for (int r = n - 1, l = n - k; l >= 0; l--, r--)
        {
            can[l][r] = can[l + 1][r - 1] & (s[l] == s[r]);
            dp[l][r] = dp[l][r - 1] + dp[l + 1][r] - dp[l + 1][r - 1] + can[l][r];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << dp[l - 1][r - 1] << '\n';
    }
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