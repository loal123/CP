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
    int dp[n + 1][m + 1];
    vector<pii> v(n);
    bool yes[n];
    memset(yes, 0, sizeof(yes));

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (yes[j] == 1)
            {
                if (i + v[j].fi <= m)
                {
                    dp[j + 1][i + v[j].fi] = max(dp[j + 1][v[j].fi], dp[i][j] + v[j].se);
                }
            }
            else 
            {
                dp[j + 1][i + v[]]
            }
        }
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