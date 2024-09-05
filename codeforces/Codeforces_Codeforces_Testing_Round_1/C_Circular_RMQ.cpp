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
#define int ll
const int maxn = 1 << 18;
ll t[2 * maxn];
ll lazy[2 * maxn];
struct lazyseg
{

    void propagate(int v, int tl, int tr)
    {
        if (lazy[v] != 0)
        {
            t[v] += lazy[v];
            if (tl != tr)
            {
                lazy[v * 2] += lazy[v];
                lazy[v * 2 + 1] += lazy[v];
            }
            lazy[v] = 0;
        }
    }

    void update(int v, int tl, int tr, int l, int r, int val)
    {
        propagate(v, tl, tr);
        if (tl >= l && tr <= r)
        {
            lazy[v] += val;
            propagate(v, tl, tr);
        }
        else if (tl > r || tr < l)
            return;
        else
        {
            int mid = (tl + tr) / 2;
            update(2 * v, tl, mid, l, r, val);
            update(2 * v + 1, mid + 1, tr, l, r, val);
            t[v] = min(t[v * 2], t[v * 2 + 1]);
        }
    }
    ll query(int v, int tl, int tr, int l, int r)
    {
        propagate(v, tl, tr);
        if (tl >= l && tr <= r)
        {
            return t[v];
        }
        else if (tl > r || tr < l)
            return INF;
        else
        {
            int mid = (tl + tr) / 2;
            return min(query(2 * v, tl, mid, l, r),
                       query(2 * v + 1, mid + 1, tr, l, r));
        }
    }
    ll query(int l, int r, int n)
    {
        return query(1, 0, n - 1, l, r);
    }
    void update(int l, int r, int n, int val)
    {
        update(1, 0, n - 1, l, r, val);
    }
};
void solve()
{
    int n;
    cin >> n;
    lazyseg seg;
    memset(lazy, 0, sizeof(lazy));
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        seg.update(i, i, n, x);
    }
    int q;
    cin >> q;
    cin.ignore();

    while (q--)
    {

        string s;
        getline(cin, s);
        stringstream ss(s);

        vector<int> v(3);
        ss >> v[0] >> v[1];

        if (ss >> v[2])
        {
            if (v[0] <= v[1])
            {
                seg.update(v[0], v[1], n, v[2]);
            }
            else
            {
                seg.update(0, v[1], n, v[2]);
                seg.update(v[0], n - 1, n, v[2]);
            }
        }
        else
        {
            if (v[0] <= v[1])
                cout << seg.query(v[0], v[1], n) << '\n';
            else
                cout << min(seg.query(0, v[1], n), seg.query(v[0], n - 1, n)) << '\n';
        }
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