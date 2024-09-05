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
    pll a, b;
    cin >> a.fi >> a.se;
    cin >> b.fi >> b.se;
    vector<vl> dp(a.fi + 1, vl(a.se + 1, 0));
    int xd = max(a.fi, a.se);
    dp[a.fi][b.se] = 1;
    for (int i = a.fi; i >= 0; i--)
    {
        for (int j = a.se; j >= 0; j--)
        {
            for (int k = 1; k <= xd; k++)
            {
                if (k >= b.fi && i - k >= 0)
                {
                    dp[i - k][j] += dp[i][j];
                    dp[i - k][j] %= mod;
                }
                if (k >= b.se && j - k >= 0)
                {
                    dp[i][j - k] += dp[i][j];
                    dp[i][j - k] %= mod;
                }
            }
        }
    }
    ll ans = 0;
    for (int i = a.fi - 1; i >= 0; i--)
    {
        for (int j = a.se - 1; j >= 0; j--)
        {
            ans += dp[i][j];
            ans %= mod;
        }
    }
    cout << ans << '\n';
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