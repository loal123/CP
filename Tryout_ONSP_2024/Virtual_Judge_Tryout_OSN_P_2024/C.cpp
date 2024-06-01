#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
int main()
{
    freopen("output.txt", "r", stdin);
    ll n;
    cin >> n;
    map<ll, vector<ll>> x;
    map<ll, vector<ll>> y;
    map<ll, ll> counts;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        x[a].pb(b);

        y[b].pb(a);
    }
    for (auto i : x)
    {
        ll elementsss = 0;
        ll currsum = 0;

        for (auto j : i.second)
        {
            int sz = y[j].size();
            sz--;
            currsum += sz;
            elementsss++;
        }
        ans += currsum * (elementsss - 1);
    }
    cout << ans;
    // x: 0 = 0, 1; 1 = 0  y: 0 = 0,1 1 = 0
    // x: 0 = 2; 1 = 2;
    // y: 0 = 2;  1 = 2;

    // if found a coordinate sharing x/y find a coordinate in which it either shares y/x
    // example: 0 1 ,0 2
    /*
    x..
    ...
    x.x
    */

    //
}