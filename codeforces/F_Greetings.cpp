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
ll merge(ll a[], ll temp[], ll l, ll mid, ll r)
{
    ll i, j, k;
    ll inv = 0;
    i = l;
    j = mid;
    k = l;
    while (i <= mid - 1 && j <= r)
    {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
        {
            temp[k++] = a[j++];

            inv += (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = a[i++];
    while (j <= r)
        temp[k++] = a[j++];

    for (i = l; i <= r; i++)
    {
        a[i] = temp[i];
    }
    return inv;
}
ll _mergesort(ll a[], ll temp[], ll l, ll r)
{
    ll mid, inv = 0;
    if (r > l)
    {

        mid = (l + r) / 2;

        inv += _mergesort(a, temp, l, mid);
        inv += _mergesort(a, temp, mid + 1, r);

        inv += merge(a, temp, l, mid + 1, r);
    }
    return inv;
}
ll mergesort(ll a[], ll size)
{
    ll temp[size];
    return _mergesort(a, temp, 0, size - 1);
}
void solve()
{
    ll n;
    cin >> n;
    vector<pii> v;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.pb(mp(a, b));
    }
    sort(all(v));
    ll vec[n];
    for (ll i = 0; i < n; i++)
        vec[i] = v[i].se;

    cout << mergesort(vec, n) << '\n';
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