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
const int maxn = 2e5 + 5;
ll t[maxn * 4];
void build(ll a[], ll v, ll tl, ll tr)
{
    if (tl == tr)
    {
        t[v] = a[tl];
    }
    else
    {
        ll tm = (tl + tr) / 2;
        build(a, v * 2, tl, tm);
        build(a, v * 2 + 1, tm + 1, tr);
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}
ll sum(ll v, ll l, ll r, ll tl, ll tr)
{
    if (l > r)
        return 0;
    if (l == tl && r == tr)
    {
        return t[v];
    }
    ll tm = (tl + tr) / 2;
    return (ll)sum(v * 2, l, min(r, tm), tl, tm) + sum(v * 2 + 1, max(l, tm + 1), r, tm + 1, tr);
}
void update(ll v, ll tl, ll tr, ll l, ll r, ll m)
{
    if (l > r)
        return;
    if (l == tl && r == tr)
    {
        t[v] %= m;
    }
    else
    {
        ll tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(r, tm), m);
        update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, m);
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}
void solve()
{
    ll n, q;
    cin >> n >> q;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(a, 1, 0, n - 1);
    while (q--)
    {
        ll d, x, y;
        cin >> d >> x >> y;
        if (d == 1)
        {
            ll m;
            cin >> m;
            update(1, 0, n - 1, x - 1, y - 1, m);
        }
        else
        {
            cout << sum(1, x - 1, y - 1, 0, n - 1) << '\n';
        }
    }
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