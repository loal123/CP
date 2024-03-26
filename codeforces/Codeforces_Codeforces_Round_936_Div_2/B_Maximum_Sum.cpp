#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll maxi = 0;
    ll curr = 0;
    ll totalsum = 0;
    for (ll i = 0; i < n; i++)
    {
        curr += a[i];
        totalsum += a[i];
        if (curr < 0)
            curr = 0;
        maxi = max(maxi, curr);
    }
    ll yeah = maxi;

    maxi %= mod;
    maxi += mod;
    while (k--)
    {
        maxi *= 2;

        maxi %= mod;
        maxi += mod;
        maxi %= mod;
    }
    yeah %= mod;
    yeah += mod;

    totalsum %= mod;
    totalsum += mod;
    cout << ((totalsum - yeah + maxi) + mod) % mod << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}