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
    int n, m, k;
    cin >> n >> m >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll has[n + 1][n + 1];
    memset(has, 0, sizeof(has));
    for (int i = 0; i < k; i++)
    {
        int x, y;
        ll val;
        cin >> x >> y >> val;
        x--;
        y--;
        has[x][y] = val;
    }

    // dp[amount eaten][mask][last]
    vector<vl> dp((1 << n), vl(n + 1, -INFF));
    dp[0][0] = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < (1 << n); j++)
        {
            if (__builtin_popcount(j) != i)
                continue;
            for (int curr = 0; curr < n; curr++)
            {
                if (j & (1 << curr))
                    continue;

                if (i == 0)
                {
                    dp[(1 << curr)][curr] = v[curr];
                    continue;
                }
                for (int last = 0; last < n; last++)
                {
                    if (j & (1 << (last)))
                    {
                        dp[j | (1 << curr)][curr] = max(dp[j | (1 << curr)][curr], dp[j][last] + v[curr] + has[last][curr]);
                    }
                }
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans = max(ans, dp[i][j]);
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