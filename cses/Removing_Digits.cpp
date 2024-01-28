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
    int dp[n + 1];

    for (int i = 0; i <= n; i++)
    {
        dp[i] = INF;
    }
    dp[n] = 0;
    for (int i = n; i >= 0; i--)
    {
        string s = to_string(i);
        for (auto j : s)
        {
            int neg = j - '0';
            dp[i - neg] = min(dp[i] + 1, dp[i - neg]);
        }
    }
    cout << dp[0];
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