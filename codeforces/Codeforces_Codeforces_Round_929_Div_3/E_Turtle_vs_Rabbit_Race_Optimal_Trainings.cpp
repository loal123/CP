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
ll calculateValue(ll rn, ll u)
{

    return rn * (u + (u - rn + 1)) / 2;
}

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll pref[n + 1];
    pref[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        ll l, u;
        cin >> l >> u;
        ll maxi = -INFF;
        ll pos = n;
        l--;
        ll left = l + 1;
        ll right = n;
        while (right - left > 3)
        {
            ll m1 = left + (right - left) / 3;
            ll m2 = right - (right - left) / 3;
            ll val1 = calculateValue(pref[m1] - pref[l], u);
            ll val2 = calculateValue(pref[m2] - pref[l], u);
            if (val1 < val2)
                left = m1;
            else
                right = m2;
        }
        ll maxRange = left;
        ll maxValue = -INF;

        for (ll i = left; i <= right; i++)
        {
            ll val = calculateValue(pref[i] - pref[l], u);
            if (val > maxValue)
            {
                maxValue = val;
                maxRange = i;
            }
        }
        cout << maxRange << " ";
    }
    cout << '\n';
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