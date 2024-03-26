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
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pll> m(k);
    vector<pll> z(n);
    for (ll i = 0; i < k; i++)
    {
        ll x, y;
        cin >> x >> y;
        m[i] = {x, y};
        z[i] = {x, y};
    }

    for (ll i = k; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        z[i] = {x, y};
    }

    ll ax = z[a - 1].fi;
    ll ay = z[a - 1].se;
    ll bx = z[b - 1].fi;
    ll by = z[b - 1].se;
    if (k <= 1)
    {
        cout << abs(ax - bx) + abs(ay - by) << '\n';
        return;
    }

    ll amin = INF;
    ll bmin = INF;
    for (auto i : m)
    {
        amin = min(abs(ax - i.fi) + abs(ay - i.se), amin);
        bmin = min(abs(bx - i.fi) + abs(by - i.se), bmin);
    }

    cout << min(abs(ax - bx) + abs(ay - by), amin + bmin) << '\n';
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