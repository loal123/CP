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
const int maxn = 1 << 18;
ll t[2 * maxn];
ll lazy[2 * maxn];

void propagate(int v, int tl, int tr)
{
    if (tl != tr)
    {
        lazy[2 * v] += lazy[v];
        lazy[2 * v + 1] += lazy[v];
    }
    t[v] += 1LL * lazy[v] * (tr - tl + 1);
    lazy[v] = 0;
}
void update(int v, int tl, int tr, int l, int r, ll val)
{
    propagate(v, tl, tr);
    if (l > tr || r < tl)
        return;
    if (tl >= l && tr <= r)
    {
        lazy[v] += val;
        propagate(v, tl, tr);
    }
    else
    {
        int tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, r, val);
        update(v * 2 + 1, tm + 1, tr, l, r, val);
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}
ll query(int v, int tl, int tr, int l, int r)
{
    propagate(v, tl, tr);
    if (l > tr || r < tl)
        return 0;
    if (tl >= l && tr <= r)
    {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return query(v * 2, tl, tm, l, r) + query(v * 2 + 1, tm + 1, tr, l, r);
}
void solve()
{
    int q;
    cin >> q;
    int realq = q;
    int curr = 1;
    while (q--)
    {
        int o;
        cin >> o;
        if (o == 1)
        {
            int pos;
            cin >> pos;
            ll x;
            cin >> x;
            update(1, 0, realq, 0, pos - 1, x);
        }
        else if (o == 2)
        {
            ll x;
            cin >> x;
            update(1, 0, realq, curr, curr, x);
            curr++;
        }
        else
        {

            ll x = query(1, 0, realq, curr - 1, curr - 1);
            curr--;
            update(1, 0, realq, curr, curr, -x);
        }
        ll ans = query(1, 0, realq, 0, curr - 1);
        ld aans = ans;
        cout << fixed << setprecision(8) << (double)ans / curr << endl;
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