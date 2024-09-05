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
    // vector<vl> dp(n + 1, vl((1 << k), -INF));

    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    s1--;
    s2--;
    s3--;
    s4--;
    

    

    // int start = (1 << s1) + (1 << s2) + (1 << s3) + (1 << s4);
    // dp[0][start] = 0;

    // char a[k][k];
    // for (int i = 0; i < k; i++)
    // {
    //     for (int j = 0; j < k; j++)
    //         cin >> a[i][j];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     int d;
    //     cin >> d;
    //     if (d == 1)
    //     {
    //         int x;
    //         cin >> x;
    //         x--;

    //         for (int bit = 1; bit < (1 << k); bit++)
    //         {
    //             bool can = false;
    //             if (__builtin_popcount(bit) != 4)
    //                 continue;

    //             for (int j = 0; j < k; j++)
    //             {
    //                 if (bit & (1 << j))
    //                 {
    //                     if (a[j][x] == '1')
    //                         can = 1;
    //                 }
    //             }
    //             dp[i + 1][bit] = max(dp[i][bit] + can, dp[i + 1][bit]);
    //         }
    //     }
    //     else
    //     {

    //         for (int bit = 1; bit < (1 << k); bit++)
    //         {
    //             bool can = false;
    //             if (__builtin_popcount(bit) != 4)
    //                 continue;

    //             for (int j = 0; j < k; j++)
    //             {
    //                 if (bit & (1 << j))
    //                 {
    //                     for (int idk = 0; idk < k; idk++)
    //                     {
    //                         if (!(bit & (1 << idk)))
    //                         {
    //                             dp[i + 1][bit] = max(dp[i + 1][bit], dp[i][bit ^ (1 << j) ^ (1 << idk)]);
    //                         }
    //                     }
    //                 }
    //                 dp[i + 1][bit] = max(dp[i + 1][bit], dp[i][bit]);
    //             }
    //         }
    //     }
    // }
    // ll ans = 0;
    // for (int i = 1; i < (1 << k); i++)
    // {
    //     if (__builtin_popcount(i) == 4)
    //         ans = max(ans, dp[n][i]);
    // }
    cout << ans << '\n';
    // dp[room][state] where it stores max amount of evil spirits or monsters idk
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