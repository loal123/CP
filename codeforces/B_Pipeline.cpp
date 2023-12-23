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

    ll a = 0, b = girl - 1;
    bool can = false;
    ll minx = 1e18;
    while (a != b)
    {

        ll mid = ((a + b)) / 2;
        ll counts = mid * (girl - mid + (girl - 1)) / 2;
        if (counts + 1 >= super)
        {
            can = true;
            minx = min(minx, mid);
            b = mid;
        }
        else
            a = mid + 1;
    }
    if (a == girl - 1)
    {
        ll counts = a * (girl - a + (girl - 1)) / 2;
        if (counts + 1 >= super)
        {
            can = true;
            minx = min(minx, a);
        }
    }

    cout << (can ? minx : -1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}