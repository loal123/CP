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
    ll n, x;
    cin >> n >> x;
    ll a[n];
    ll maxi = 1;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 2e9 + 7;
    while (l < r)
    {
        ll mid = l + (r - l + 1) / 2;
        ll counts = 0;
        for (ll i = 0; i < n; i++)
        {
            counts += max(mid - a[i], 0LL);
        }

        if (counts > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid;
        }
    }
    cout << l << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}