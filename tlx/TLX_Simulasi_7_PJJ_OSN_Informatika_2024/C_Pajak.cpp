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

struct xyz
{
    ll x, y, z;
};
bool comp(xyz a, xyz b)
{
    if (a.x < b.x)
        return 1;
    else if (a.x > b.x)
        return 0;
    if (a.y < b.y)
        return 1;
    else if (a.y > b.y)
        return 0;
    if (a.z < b.z)
        return 1;

    return 0;
}
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int n = a + b + c;
    vector<xyz> v(n);
    ll idk = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].x >> v[i].y >> v[i].z;
        idk += v[i].x;
    }
    sort(all(v), comp);
    vector<pll> dp(n + 1, {-INFF, 0});
    for (int i = 0; i < n; i++)
    {
    }
    // vector<vl> dp(b + 1, vl(c + 1, -INFF));
    // dp[0][0] = idk;

    // for (int i = 0; i <= b; i++)
    // {
    //     for (int j = 0; j <= c; j++)
    //     {
    //         int idx = i + j;
    //         if (i > 0)
    //         {
    //             dp[i][j][k] = max(dp[i - 1][j][k] + v[idx].x, dp[i][j][k]);
    //         }
    //         if (j > 0)
    //         {
    //             dp[i][j][k] = max(dp[i][j - 1][k] + v[idx].y, dp[i][j][k]);
    //         }
    //         if (k > 0)
    //         {
    //             dp[i][j][k] = max(dp[i][j][k - 1] + v[idx].z, dp[i][j][k]);
    //         }
    //     }
    // }
    // cout << dp[a][b][c] << '\n';
    // sort(all(xd));
    // reverse(all(xd));

    // // sort(all(v), comp);
    // ll ans = 0;

    // for (auto i : xd)
    // {
    //     if (i.fi > i.se)
    //     {
    //     }
    // }

    // cout << ans << '\n';
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