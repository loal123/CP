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
// Super is a cute girl
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, pair<ll, ll>>> v(n);
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        v[i].se.fi = z;
    }
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        v[i].se.se = z;
    }
    for (int i = 0; i < n; i++)
    {

        ll z;
        cin >> z;
        v[i].fi = z;
    }
    sort(v.rbegin(), v.rend());
    bool can = true;
    ll counts = 0;
    for (int i = 0; i < n - 1; i++)
    {

        v[i + 1].se.fi += v[i + 1].se.se * counts;
        if (v[i].se.fi >= v[i + 1].se.fi)
        {
            if (v[i + 1].se.se > v[i].se.se)
            {
                ll rn = counts;
                counts += (v[i].se.fi - v[i + 1].se.fi) / abs(v[i].se.se - v[i + 1].se.se) + 1;
                v[i + 1].se.fi += v[i + 1].se.se * (counts - rn);
            }
            else
            {
                can = false;
                break;
            }
        }
    }
    if (can)
    {
        cout << counts;
    }
    else
        cout << -1;

    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T;
    cin >> T;
    while (T--)
        solve();
}