#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
const int INF = 1e9 + 5;
const ll mod = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    ll amount[n + 5];
    amount[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        amount[i] = amount[i - 1] * 2;
        amount[i] %= mod;

    } // for every v until 2^n, u will have to be , yeah given highest bit so for

    ll dp[n + 5];
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1] * amount[i];
        dp[i] %= mod;
    }
    ll ans = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        ans += amount[i] * i;
        ans %= mod;
    }

    cout << ans;
    // 15 = 7,3,1 3
    // 14 = 7,3,1 3
    // 13 = 6,3,1 3
    // 12 = 6,3,1 3
    // 11 = 5,2,1 3
    // 10 = 5,2,1 3
    // 9 = 4,2,1  3
    // 8 = 4,2,1 3
    // 7 = 3,1 2
    // 6 = 3,1 2
    // 5 = 2,1 2
    // 4 = 2,1 2
    // 3 = 1 1
    // 2 = 1
    // 1 = 0
    // 0 = null
}