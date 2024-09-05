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

ll t[5][maxn];

struct segtree
{
    void build(ll a[], int v, int tl, int tr, int idx)
    {
        if (tl == tr)
            t[idx][v] = a[tl];
        else
        {
            int tm = (tl + tr) / 2;
            build(a, v * 2, tl, tm, idx);
            build(a, v * 2 + 1, tm + 1, tr, idx);
            t[idx][v] = max(t[idx][v * 2], t[idx][v * 2 + 1]);
        }
    }
    ll query(int v, int tl, int tr, int l, int r, int idx)
    {
        if (tl >= l && tr <= r)
        {
            return t[idx][v];
        }
        if (tl > r || tr < l)
            return -1;
        int tm = (tl + tr) / 2;
        return max(query(v * 2, tl, tm, l, r, idx), query(v * 2 + 1, tm + 1, tr, l, r, idx));
    }
};
void solve()
{

    int n, m, k;

    cin >> n >> m >> k;
    segtree seg;
    ll a[m][n];
    pair<ll, vl> ans;
    for (int i = 0; i < m; i++)
    {
        ans.se.pb(0);
    }
    ans.fi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        seg.build(a[i], 1, 0, n - 1, i);
    }

    int l = 0, r = 0;
    while (r < n)
    {
        while (r < l)
            r++;
        if (r >= n)
            break;
        ll curr = 0;
        vl xd;
        for (int i = 0; i < m; i++)
        {
            ll x = seg.query(1, 0, n - 1, l, r, i);
            curr += x;
            xd.pb(x);
        }
        if (curr <= k)
        {
            if (r - l + 1 > ans.fi)
            {
                ans.fi = r - l + 1;
                ans.se = xd;
            }
            r++;
        }
        else
            l++;
    }
    for (auto i : ans.se)
        cout << i << " ";
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