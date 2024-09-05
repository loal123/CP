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
    int val, pos1, pos2;
};
info t[2 * maxn];
info compare(info a, info b)
{
    if (a.val > b.val)
        return a;
    else if (b.val > a.val)
        return b;
    else
    {
        return {a.val, a.pos1, b.pos2};
    }
}
void mergetree(int v)
{
    t[v].val = max(t[v * 2].val, t[v * 2 + 1].val);
    t[v].pos1 = min(t[v * 2].pos1, t[v * 2 + 1].pos1);
    t[v].pos2 = max(t[v * 2].pos2, t[v * 2 + 1].pos2);
}

void build(int a[], int v, int tl, int tr)
{
    if (tl == tr)
    {
        t[v] = {a[tl], tl - a[tl], tl + a[tl]};
    }

    else
    {
        int tm = (tl + tr) / 2;
        build(a, v * 2, tl, tm);
        build(a, v * 2 + 1, tm + 1, tr);
        mergetree(v);
    }
}
info query(int v, int tl, int tr, int l, int r)
{
    if (l > tr || r < tl)
        return {-INF, INF, -INF};
    if (tl >= l && tr <= r)
        return t[v];
    int tm = (tl + tr) / 2;
    info v1 = query(v * 2, tl, tm, l, r);
    info v2 = query(v * 2 + 1, tm + 1, tr, l, r);
    return {max(v1.val, v2.val), min(v1.pos1, v2.pos1), max(v1.pos2, v2.pos2)};
}
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(a, 1, 0, n - 1);

    int q;
    cin >> q;
    while (q--)
    {

        int s, e;
        cin >> s >> e;
        s--;
        e--;

        // ll currans = 0;
        // int curr = a[s];

        info yeah = query(1, 0, n - 1, min(s, e), max(s, e));
        // // cout << yeah.val << " " << yeah.pos1 << '\n';
        // if (curr > yeah.val)
        // {

        //     if (e - s <= curr - yeah.val)
        //     {
        //         cout << curr << '\n';
        //         continue;
        //     }
        //     else
        //     {
        //         int dist = e - s;
        //         int godown = curr - yeah.val;

        //         cout << ((dist - godown) * 2LL + godown) << '\n';
        //         continue;
        //     }
        // }
        // else if (curr < yeah.val)
        // {
        //     int goup = yeah.val - curr;
        //     int dist = e - s;
        //     if (dist <= goup)
        //     {
        //         cout << goup * 4 << '\n';
        //         continue;
        //     }
        //     else
        //     {
        //         cout << (dist - goup) * 2LL + goup * 4 << '\n';
        //         continue;
        //     }
        // }
        // int endh = a[e];
        // int maxh = yeah.val;
        // ll ndist = e - yeah.pos1;

        // int GODOWN = maxh - endh;

        // cout << currans + max(0LL, ndist - GODOWN) * 2 + GODOWN << '\n';

        cout << 1LL * (yeah.val - a[s]) * 4 + ((yeah.pos2 - yeah.val) - (yeah.pos1 + yeah.val)) * 2 + (yeah.val - a[e]) << '\n';

        // cout << ans << '\n';
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}