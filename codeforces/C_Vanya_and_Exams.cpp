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
    ll n, r, avg;
    cin >> n >> r >> avg;
    vector<pll> v;
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.pb(mp(b, a));
        total += a;
    }

    sort(all(v));
    ll counts = 0;
    ll curr = 0;
    while (total < avg * n)
    {
        if (total + (r - v[curr].se) < avg * n)
        {
            total += (r - v[curr].se);
            counts += (r - v[curr].se) * v[curr].fi;
        }
        else
        {
            counts += (avg * n - total) * v[curr].fi;
            break;
        }

        curr++;
    }

    cout << counts;
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