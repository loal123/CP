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
    int n;
    cin >> n;
    vl a(n), b(n), c(n);
    vector<pll> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.pb({a[i], 0});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        v.pb({b[i], 1});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    sort(all(v));
    stack<ll> s;
    sort(c.rbegin(), c.rend());
    vl real;
    ll ans = 0;
    int idx = 0;
    for (int i = 0; i < n * 2; i++)
    {
        if (v[i].se == 0)
            s.push(v[i].fi);
        else
        {
            real.pb((ll)(v[i].fi - s.top()));

            s.pop();
        }
    }
    sort(all(real));
    for (int i = 0; i < n; i++)
    {
        ans += (ll)real[i] * c[i];
    }
    cout << ans << "\n";
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