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
    ll m, x;
    cin >> m >> x;
    ll total = 0;
    vector<pll> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i].fi >> v[i].se;
        total += v[i].se;
    }
    vector<vector<ll>> dp(m + 1, vector<ll>(total + 5, INF));
    dp[0][0] = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int value = total; value >= v[i - 1].se; value--)
        {
            for (int j = 0; j < i; j++)
            {
                if (min(dp[i][value], dp[j][value - v[j].se] + v[j].fi) <= x * (i - 1))
                    dp[i][value] = min(dp[i][value], dp[j][value - v[j].se] + v[j].fi);
            }
        }
    }
    ll ans = 0;
    for (int i = 1; i <= m; i++)
    {
        for (ll j = 0; j <= total; j++)
        {
            if (dp[i][j] <= x * (i - 1))
            {
                ans = max(ans, j);
            }
        }
    }
    cout << ans << endl;
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