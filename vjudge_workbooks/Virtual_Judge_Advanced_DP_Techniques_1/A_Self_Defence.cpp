// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// #define vi vector<int>
// #define vl vector<ll>
// #define fi first
// #define se second
// #define pb push_back
// #define mp make_pair
// #define all(v) v.begin(), v.end()
// #define SZ(x) ((int)((x).size()))
// #define pow2(x) ((ll)(x) * (x))
// const ll mod = 1e9 + 7;
// const int INF = 1e9 + 5; // 998244353
// const ll INFF = 1e18 + 5;
// // Super is the cutest girl
// vector<string> yeah;
// string s;
// int n, m, k;
// void produce(string curr, int idx)
// {
//     if (idx == n)
//     {
//         yeah.pb(curr);
//         return;
//     }
//     if (s[idx] == 'A')
//     {
//         produce(curr + 'A', idx + 1);
//     }
//     else if (s[idx] == 'B')
//     {
//         produce(curr + 'B', idx + 1);
//     }
//     else
//     {
//         produce(curr + 'A', idx + 1);
//         produce(curr + 'B', idx + 1);
//     }
// }
// void solve()
// {

//     cin >> n >> m >> k;
//     cin >> s;
//     produce("", 0);
//     ll ans = 0;
//     for (auto i : yeah)
//     {
//         ll curr = 0;
//         ll con = 1;
//         if (con >= m)
//             curr++;
//         for (int j = 1; j < n; j++)
//         {
//             if (i[j] == i[j - 1])
//                 con++;
//             else
//             {
//                 con = 1;
//             }
//             if (con >= m)
//                 curr++;
//         }
//         if (curr == k)
//             ans++;
//     }
//     cout << ans << '\n';
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // int t; cin >> t; while(t--)
//     solve();
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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n, m, k;
    string s;
    cin >> n >> m >> k >> s;
    ll dp[n + 1][m + 1][k + 1][2];
    memset(dp, 0, sizeof(dp));
    if (s[0] == 'A')
    {
        if (m == 1)
        {
            dp[0][1][1][0] = 1;
        }
        else
            dp[0][1][0][0] = 1;
    }
    else if (s[0] == 'B')
    {
        if (m == 1)
        {
            dp[0][1][1][1] = 1;
        }
        else
            dp[0][1][0][1] = 1;
    }
    else
    {
        if (m == 1)
        {
            dp[0][1][1][0] = 1;
            dp[0][1][1][1] = 1;
        }
        else
        {
            dp[0][1][0][1] = 1;
            dp[0][1][0][0] = 1;
        }
    }
    for (int i = 1; i < n; i++)
    {

        for (int j = 1; j <= m; j++)
        {
            for (int imun = 0; imun <= k; imun++)
            {
                if (j == m && imun > 0)
                {
                    dp[i][j][imun][0] = dp[i - 1][j][imun - 1][0] + dp[i - 1][j - 1][imun - 1][0];
                    dp[i][j][imun][1] = dp[i - 1][j - 1][imun - 1][1] + dp[i - 1][j][imun - 1][1];
                }
                else if (j != m)
                {
                    dp[i][j][imun][0] = dp[i - 1][j - 1][imun][0];
                    dp[i][j][imun][1] = dp[i - 1][j - 1][imun][1];
                }
                if (s[i] == 'A')
                {
                    dp[i][j][imun][1] = 0;
                }
                if (s[i] == 'B')
                    dp[i][j][imun][0] = 0;

                dp[i][j][imun][0] %= mod;
                dp[i][j][imun][1] %= mod;
            }
        }
        for (int j = 1; j <= m; j++)
        {
            for (int imun = 0; imun <= k; imun++)
            {
                if (s[i] != 'B')
                {
                    dp[i][1][imun][0] += dp[i - 1][j][imun][1];
                }
                if (s[i] != 'A')
                {
                    dp[i][1][imun][1] += dp[i - 1][j][imun][0];
                }
                dp[i][1][imun][1] %= mod;
                dp[i][1][imun][0] %= mod;
            }
        }
    }
    ll ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans += dp[n - 1][i][k][0];
        ans %= mod;
        ans += dp[n - 1][i][k][1];
        ans %= mod;
    }
    cout << ans % mod << '\n';
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