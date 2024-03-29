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
    ll n, m;
    cin >> n >> m;
    vector<pair<double, int>> v1;
    vector<pair<double, int>> v0;
    vector<pair<pair<double, pii>, int>> v;
    for (int i = 0; i < n; i++)
    {
        int h, w, d;
        cin >> h >> w >> d;

        v.pb(mp(mp((double)w / h, mp(h, w)), d));
    }
    ll ans = 0;

    sort(v.rbegin(), v.rend());
    for (auto i : v)
    {
        if (i.se == 1)
        {
            if (m - i.fi.se.fi >= 0)
            {
                ans += i.fi.se.se;
                m -= i.fi.se.fi;
            }
        }
        else
        {
            ans += (ll)m / i.fi.se.fi * i.fi.se.se;
            m -= m / i.fi.se.fi * i.fi.se.fi;
        }
    }

    cout << ans;
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