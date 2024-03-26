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
    ll n, k;
    cin >> n >> k;
    ll a[n];
    ll b[n];
    vector<pii> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] < 0)
            b[i] *= -1;
    }
    for (ll i = 0; i < n; i++)
    {
        v.pb({b[i], a[i]});
    }
    sort(all(v));
    bool can = true;
    ll turn = 0;
    ll excess = 0;
    for (ll i = 0; i < n; i++)
    {
        if (excess >= v[i].se)
        {
            excess -= v[i].se;
            v[i].se = 0;
            continue;
        }
        else
        {
            v[i].se -= excess;
            excess = 0;
        }
        if (v[i].fi - turn <= 0)
        {
            if (v[i].se > 0)
            {
                cout << "NO\n";
                return;
            }
            excess -= v[i].se;
            turn++;
            continue;
        }
        ll zz = (ll)((v[i].se + (k - 1)) / k);
        turn += zz;
        excess += ((ll)((zz * k) - v[i].se));
        if (v[i].fi - turn < 0)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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