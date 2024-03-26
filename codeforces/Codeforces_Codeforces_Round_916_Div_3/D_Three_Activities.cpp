
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vi vector<int>
// #define pii pair<int, int>
// #define fi first
// #define se second
// #define pb push_back
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<vector<pii>> a(3);
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 int x;
//                 cin >> x;
//                 a[i].pb({x, j});
//             }
//             sort(a[i].rbegin(), a[i].rend());
//         }

//         int ans = 0;
//         vi v;
//         for (int i = 0; i < 3; i++)
//             v.push_back(i);

//         do
//         {
//             int counts = 0;
//             map<int, int> m;
//             for (auto i : v)
//             {
//                 int j = 0;
//                 while (m[a[i][j].se])
//                 {
//                     j++;
//                 }

//                 counts += a[i][j].fi;
//                 m[a[i][j].se]++;
//             }
//             ans = max(counts, ans);
//         } while (next_permutation(v.begin(), v.end()));

//         cout << ans << '\n';
//     }
// }
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
    int n;
    cin >> n;
    int dp[8];
    int a[3][n];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < 8; i++)
    {
        dp[i] = -INF;
    }
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 7; j >= 0; j--)
        {
            for (int k = 0; k < 3; k++)
            {
                if (!(j & (1 << k)))
                    continue;
                dp[j] = max(dp[j], dp[j ^ (1 << k)] + a[k][i]);
            }
        }
    }
    cout << dp[7] << "\n";
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