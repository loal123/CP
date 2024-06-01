#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    ll maxi = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }
    int l = 0, r = maxi;
    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        ll count = 0;

        for (int i = 0; i < n; i++)
        {
            if (mid < v[i])
            {
                count += v[i] - mid;
            }
        }
        if (count < m)
            r = mid - 1;
        else
            l = mid;
    }
    ll checkeridk = 0;
    for (int i = 0; i < n; i++)
    {
        if (l < v[i])
        {
            checkeridk += v[i] - l;
        }
    }
    int maxpos = -1;
    if (checkeridk >= m)
    {
        maxpos = max(maxpos, l);
    }

    checkeridk = 0;
    for (int i = 0; i < n; i++)
    {
        if (r < v[i])
        {
            checkeridk += v[i] - r;
        }
    }
    if (checkeridk >= m)
    {
        maxpos = max(maxpos, r);
    }
    cout << maxpos << endl;
}