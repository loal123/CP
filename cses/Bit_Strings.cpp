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
    ll supercutegirl;
    cin >> supercutegirl;
    ll iwtctff = 2;
    ll idk = 1;
    iwtctff %= mod;
    while (supercutegirl > 0)
    {
        if (supercutegirl % 2 == 1)
        {
            idk = (idk * iwtctff) % mod;
        }
        supercutegirl /= 2;
        iwtctff = (iwtctff * iwtctff) % mod;
    }
    cout << idk;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}