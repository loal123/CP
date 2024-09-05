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
const int maxn = 1 << 18;

struct info
{
    int pref, suff, gone;
};
info t[2 * 32];
void build(string s, int v, int tl, int tr)
{
    if (tl == tr)
    {
        if (s[tl] == '1')
            t[v].pref = 1;
        else
            t[v].suff = 1;
    }
    else
    {
        int tm = (tl + tr) / 2;
        build(s, 2 * v, tl, tm);
        build(s, 2 * v + 1, tm + 1, tr);
        if (t[v * 2].pref == 0 && t[v * 2 + 1].pref == 0)
        {
            t[v].suff = t[v * 2].suff + t[v * 2 + 1].suff;
        }
        else if (t[v * 2].suff == 0 && t[v * 2 + 1].suff == 0)
        {
            t[v].pref = t[v * 2].pref += t[v * 2 + 1].pref;
        }
        else
        {
            t[v].pref = t[v * 2].pref;
            t[v].suff = t[v * 2 + 1].suff;
            t[v].gone += min(t[v * 2].suff, t[v * 2 + 1].pref);
        }
        t[v].gone += t[v * 2].gone + t[v * 2 + 1].gone;
    }
}
int query(int v, int tl, int tr, int l, int r)
{
    if (l > tr || r < tl)
        return 0;
    if (tl >= l && tr <= r)
    {
        return t[v].gone;
    }
    int tm = (tl + tr) / 2;
    return query(v * 2, tl, tm, l, r) + query(v * 2 + 1, tm + 1, tr, l, r);
}
void update(int v, int tl, int tr, int pos)
{
    if (tl == tr)
    {
        t[v].pref ^= 1;
        t[v].suff ^= 1;
        return;
    }
    int tm = (tl + tr) / 2;
    if (pos <= tm)
    {
        update(v * 2, tl, tm, pos);
    }
    else
        update(v * 2 + 1, tm + 1, tr, pos);

    if (t[v * 2].pref == 0 && t[v * 2 + 1].pref == 0)
    {
        t[v].suff = t[v * 2].suff + t[v * 2 + 1].suff;
    }
    else if (t[v * 2].suff == 0 && t[v * 2 + 1].suff == 0)
    {
        t[v].pref = t[v * 2].pref += t[v * 2 + 1].pref;
    }
    else
    {
        t[v].pref = t[v * 2].pref;
        t[v].suff = t[v * 2 + 1].suff;
        
        t[v].gone = min(t[v * 2].suff, t[v * 2 + 1].pref);
    }
    t[v].gone += t[v * 2].gone + t[v * 2 + 1].gone;
}
// Super is the cutest girl
void solve()
{
    string s;
    cin >> s;
    int n = SZ(s);
    build(s, 1, 0, n - 1);
    int q;
    cin >> q;

    int prev = 0;
    // for (int i = 1; i < 15; i++)
    // {
    //     if (__lg(i) != prev)
    //         cout << '\n';
    //     prev = __lg(i);
    //     cout << t[i].gone << " ";
    // }

    while (q--)
    {
        int op;
        cin >> op;
        if (op == 2)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            cout << r - l + 1 - query(1, 0, n - 1, l, r) * 2 << '\n';
        }
        else
        {
            int x;
            cin >> x;
            update(1, 0, n - 1, x - 1);
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