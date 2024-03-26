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
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int x[5] = {0, 2, 4, 6, 8};
    ll n;
    cin >> n;
    ll meh = 0;
    ll real = pow(5, 20);
    for (ll i = 20; i > 0; i--)
    {
        if (n > pow(5, i))
        {
            meh += floor(n / pow(5, i)) * 2 * pow(10, i);
            n -= floor(n / pow(5, i)) * pow(5, i);
        }
    }
    cout << meh + x[n - 1];
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