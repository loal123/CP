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
void search(ll left, ll right, set<ll> &s, vl a, ll n, vl pref)
{

    s.insert(pref[right + 1] - pref[left]);
    if (left == right)
        return;
    ll x = (a[left] + a[right]) / 2;
    ll sear = upper_bound(all(a), x) - a.begin();
    if (a[left] == a[right])
        return;

    if (sear > left)
    {
        search(left, sear - 1, s, a, n, pref);
    }
    if (sear <= right)
    {
        search(sear, right, s, a, n, pref);
    }
}
void solve()
{
    ll n, q;
    cin >> n >> q;
    vl a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));

    vector<ll> pref(n + 1);
    pref[0] = 0;
    for (ll i = 1; i <= n; i++)
    {

        pref[i] = pref[i - 1] + a[i - 1];
    }
    set<ll> s;
    search(0, n - 1, s, a, n, pref);

    while (q--)
    {
        ll x;
        cin >> x;
        if (s.count(x) == 1)
            cout << "Yes";
        else
            cout << "No";

        cout << '\n';
    }
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