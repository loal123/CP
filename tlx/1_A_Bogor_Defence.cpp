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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
// const int maxn = 200005;
// int a[maxn];
// int n;
// int memo[200001][20];
// int dp(int x, int curpos)
// {
//     if (x == n)
//         return 0;
//     int ans = 1e9;
//     if (memo[x][curpos] != -1)
//         return memo[x][curpos];
//     if (a[x] != curpos)
//     {
//         if (curpos + 1 <= 200)
//             ans = min(dp(x + 1, curpos + 1) + 1, ans);
//         ans = min(dp(x + 1, 1) + 1, ans);
//     }
//     else
//     {
//         if (curpos + 1 <= 200)
//             ans = min(dp(x + 1, curpos + 1), ans);
//         ans = min(dp(x + 1, 1), ans);
//     }
//     return memo[x][curpos] = ans;
// }

void solve()
{
    // memset(memo, -1, sizeof(memo));
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }

    // cout << dp(0, 1);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cur = 1;
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        if (cur == a[i])
        {

            cur = 1;
        }
        else
        {
            cur++;
            counts++;
        }
    }
    cout << counts;
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