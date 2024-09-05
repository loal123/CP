#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll b, c, d;
    cin >> b >> c >> d;

    if (c == d)
    {
        if (b > c)
        {
            cout << b - c;
        }
        else
        {
            cout << 0;
            return 0;
        }
    }

    else
    {
        vector<ll> divisors;
        if (d > c / 2)
        {
            cout << 0;
            return 0;
        }
        else
        {
            ll curr = c - d;
            for (ll i = 1; (ll)i * i <= curr; i++)
            {
                if (curr % i == 0)
                {
                    divisors.push_back(i);
                    if (i != curr / i)
                    {
                        divisors.push_back(curr / i);
                    }
                }
            }
        }
        ll ans = 0;
        for (auto i : divisors)
        {
            if (i > d && i <= b)
            {
                ans++;
            }
        }
        cout << ans;
    }

    // find numbers 1 to b where b % c = d;
}