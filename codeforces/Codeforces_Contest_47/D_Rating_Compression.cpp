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
const int maxn = 1 << 19;
int t[2 * maxn];

void build(int a[], int v, int tl, int tr)
{
    if (tl == tr)
    {
        t[v] = a[tl];
        return;
    }
    int tm = (tl + tr) / 2;
    build(a, v * 2, tl, tm);
    build(a, v * 2 + 1, tm + 1, tr);
    t[v] = min(t[v * 2], t[v * 2 + 1]);
}
int query(int v, int tl, int tr, int l, int r)
{
    if (l > tr || r < tl)
        return INF;
    if (tl >= l && tr <= r)
    {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return min(query(v * 2, tl, tm, l, r), query(v * 2 + 1, tm + 1, tr, l, r));
}
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
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        vector<bool> vis(n - i + 1);

        for (int j = 0; j < n - i; j++)
        {
            int yeah = query(1, 0, n - 1, j, j + i);

            vis[yeah] = 1;
        }
        bool can = 1;
        for (int j = 1; j <= n - i; j++)
        {
            if (!vis[j])
                can = 0;
        }
        if (can)
            cout << 1;
        else
            cout << 0;
    }
    cout << '\n';
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