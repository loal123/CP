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
    ll n, p;
    cin >> n >> p;
    ll a[n];
    ll b[n];
    vector<pll> v;
    ll curr = n;
    ll shared = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (ll i = 0; i < n; i++)
    {
        v.pb(mp(b[i], a[i]));
    }
    sort(all(v));
    ll cost = 0;
    cost += p;
    shared++;
    for (ll i = 0; i < n; i++)
    {
        if (v[i].fi < p)
        {

            if (shared >= n)
            {

                break;
            }
            cost += v[i].fi * v[i].se;
            shared += v[i].se;
            if (shared > n)
            {
                cost -= (shared - n) * v[i].fi;
                break;
            }
            if (shared == n)
                break;
        }
        else
        {
            cost += (n - shared) * p;
            break;
        }
    }
    cout << cost << '\n';
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