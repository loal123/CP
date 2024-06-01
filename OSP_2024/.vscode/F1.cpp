#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin >> n >> m;
    ll total = n * m;
    if (n == 1)
    {
        ll sumtotal = (ll)(total) * (total + 1) / 2;
        cout << sumtotal;
    }
    else if (n == 2)
    {
        ll sumtotal = (ll)(total) * (total + 1) / 2;
        ll negsum = 0;
        for (ll i = total; i > total - m + 2; i--)
        {
            negsum += i;
        }

        negsum += total - m + 1;

        cout << sumtotal - negsum;
    }
}