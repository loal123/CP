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
ll lcm(ll a, ll b)
{
    return ((a / gcd(a, b)) * b);
}
void solve()
{
    ll super, cute, girl;
    cin >> super >> cute >> girl;
    ll wow = super / lcm(cute, girl);
    ll atimes = super / cute;
    ll btimes = super / girl;
    ll idk = super - wow;
    ll a = (atimes - wow) * (super - atimes + wow + 1 + super) / 2;
    ll b = (btimes - wow) * (1 + btimes - wow) / 2;
    cout << a - b << '\n';
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