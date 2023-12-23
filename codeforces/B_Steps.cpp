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
void solve()
{
    ll super, girl;
    cin >> super >> girl;
    ll x, y;
    cin >> x >> y;
    int k;
    cin >> k;
    vector<pll> v;
    ll counts = 0;

    for (int i = 0; i < k; i++)
    {
        ll a, b, wow, idk;
        cin >> a >> b;
        if (a < 0)
            wow = (x - 1) / a;
        else if (a > 0)
        {
            wow = (super - x) / a;
        }
        else
        {
            wow = 1e9 + 1;
        }
        if (b < 0)
            idk = (y - 1) / b;
        else if (b > 0)
        {
            idk = (girl - y) / b;
        }
        else
        {
            idk = 1e9 + 1;
        }
        counts += min(abs(wow), abs(idk));
        x += a * min(abs(wow), abs(idk));
        y += b * min(abs(wow), abs(idk));
    }
    cout << counts;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}