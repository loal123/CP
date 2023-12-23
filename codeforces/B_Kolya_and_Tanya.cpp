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
int powermod(int x, int y)
{
    int res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
        {
            res = (res * x) % mod;
        }
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}
// Super is a cute girl
void solve()
{

    int supercutegirl;
    cin >> supercutegirl;
    ll iwtctff = pow(3, supercutegirl * 3);
    iwtctff %= mod;
    ll iwtlff = pow(7, supercutegirl);
    iwtlff %= mod;
    iwtctff -= iwtlff;

    if (iwtctff < 0)
        iwtctff += mod;
    cout << iwtctff % mod;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}