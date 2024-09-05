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
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi >> v[i].se;
    }
    vector<vl> dp(n + 1, vl(2, -INF));
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        if (v[i - 1].fi >= i)
        {
            dp[i][1] = 1;
            dp[i][0] = dp[i - 1][0];
        }
        else
        {
            if (i - )
            dp[i][1] = max(dp[i][1], dp)
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