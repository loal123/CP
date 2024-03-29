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
const ll mod = 1e9 + 7;
// Super is a cute girl
ll dp[1000001];
int counts = 0;

void solve()
{
    int supercutegirl;
    cin >> supercutegirl;

    dp[0] = 1;
    for (int i = 1; i <= supercutegirl; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i - j >= 0)
                dp[i] += dp[i - j];

            dp[i] %= mod;
        }
    }
    cout << dp[supercutegirl];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}