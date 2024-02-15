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
    ll n, x, y;
    cin >> n >> x >> y;
    ll a[n];
    map<pair<ll, ll>, ll> m;
    ll counts = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        counts += m[{(x - a[i] % x) % x, a[i] % y}];
        m[{a[i] % x, a[i] % y}]++;
    }

    cout << counts << endl;

    // 1 1 2 2 4 4
    // 1 0 0 1 0 1
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