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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
const int maxn = 1e5 + 5;
ll t[4 * maxn];
ll lazy[4 * maxn];
void build(ll a[], int v, int tl, int tr)
{
    if (tl == tr)
    {
        t[v] = a[tl];
    }
    else
    {
        int tm = (tl + tr) / 2;
        build(a, v * 2, tl, tm);
        build(a, v * 2 + 1, tm + 1, tr);
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}
void push(int v)
{
    t[v * 2] += lazy[v];
    lazy[2 * v] += lazy[v];
    t[v * 2 + 1] += lazy[v];
    lazy[2 * v + 1] += lazy[v];
    lazy[v] = 0;
}
void update(int v, int tl, int tr, int l, int r, ll val)
{
    if (l > r)
        return;
    if (l == tl && r == tr)
    {
        t[v] += val;
        lazy[v] += val;
    }
    else
    {
        push(v);
        int tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(r, tm), val);
        update(v * 2, tm + 1, tr, max(tm + 1, l), r, val);
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}
ll query(int v, int tl, int tr, int l, int r)
{
    if (l > r)
        return 0;
    if (l == tl && r == tr)
        return t[v];
    push(v);
    int tm = (tl + tr) / 2;
    return query(v * 2, tl, tm, l, min(r, tm)) + query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}
void solve()
{
    int n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(a, 1, 0, n - 1);
    while (q--)
    {
        int d;
        cin >> d;
        if (d == 1)
        {
            int l, r;
            ll val;
            cin >> l >> r >> val;
            l--;
            r--;
            update(1, 0, n - 1, l, r, val);
        }
        else
        {
            int x;
            cin >> x;
            x--;
            cout << query(1, 0, n - 1, x, x) << '\n';
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