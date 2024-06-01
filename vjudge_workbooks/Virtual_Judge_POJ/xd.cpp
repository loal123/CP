#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
using namespace std;
#define ll long long
int main()
{
    ll x = 1000000000LL * 1000000000LL;
    int ans = 0;
    for (ll i = 1; (ll)i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ans++;
            if (i != x / i)
            {
                ans++;
            }
        }
    }
    cout << ans;
}