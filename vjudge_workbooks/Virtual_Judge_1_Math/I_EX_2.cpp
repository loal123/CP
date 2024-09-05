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
    vl a(3);

    int n;
    cin >> n;
    vl v(n);
    for (ll &i : a)
        cin >> i;
    vector<vl> dp(n + 1, vl(8, INFF));
    dp[0][0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll needed[n + 1][8];
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < 8; j++)
        {
            ll curr = 1;

            for (int k = 0; k < 3; k++)
            {
                if ((1 << k) & j)
                    curr = lcm(curr, a[k]);
            }
            ll rem = v[i] % curr;
            if (rem == 0)
                needed[i][j] = 0;
            else
                needed[i][j] = curr - rem;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            for (int k = 1; k < 8; k++)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][j]);
                dp[i][j | k] = min(dp[i][j | k], dp[i - 1][j] + needed[i - 1][k]);
            }
        }
    }
    cout << dp[n][7] << '\n';
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