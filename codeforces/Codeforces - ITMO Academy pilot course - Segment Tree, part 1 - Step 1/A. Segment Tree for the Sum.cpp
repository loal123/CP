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
const int maxn = 1e5 + 5;
ll t[4 * maxn];
void build(ll a[], ll v, ll tl, ll tr)
{
    if (tl == tr)
        t[v] = a[tl];
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
        return t[v];

    ll tm = (tl + tr) / 2;
    return sum(v * 2, tl, tm, l, min(tm, r)) + sum(v * 2 + 1, tm + 1, tr, max(tm + 1, l), r);
}
void update(ll v, ll tl, ll tr, ll pos, ll x)
{
    if (tl == tr)
        t[v] = x;
    else
    {
        ll tm = (tl + tr) / 2;

        if (pos <= tm)
            update(v * 2, tl, tm, pos, x);
        else
            update(v * 2 + 1, tm + 1, tr, pos, x);

        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(a, 1, 0, n - 1);
    while (m--)
    {
        ll d, x, y;
        cin >> d >> x >> y;
        if (d == 1)
        {
            update(1, 0, n - 1, x, y);
        }
        else
        {
            cout << sum(1, x, y - 1, 0, n - 1) << '\n';
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