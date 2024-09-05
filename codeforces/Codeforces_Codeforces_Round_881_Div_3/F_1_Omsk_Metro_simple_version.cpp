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
struct datas
{
    int neg, pos, l, r;
};
void solve()
{
    int n;
    cin >> n;
    vector<datas> depth(n + 10);
    depth[1].neg = 0, depth[1].pos = 1, depth[1].l = 0, depth[1].r = 1;
    int currsz = 1;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        if (x == '+')
        {
            int v, val;
            cin >> v >> val;
            int curr = ++currsz;
            depth[curr].l = depth[v].l;
            depth[curr].r = depth[v].r;
            if (val < 0)
            {
                depth[curr].neg = depth[v].neg - 1;
                depth[curr].pos = depth[v].pos - 1;
                depth[curr].pos = max(depth[curr].pos, 0);
            }
            else
            {
                depth[curr].neg = depth[v].neg + 1;
                depth[curr].pos = depth[v].pos + 1;
                depth[curr].neg = min(depth[curr].neg, 0);
            }
            depth[curr].l = min(depth[curr].l, depth[curr].neg);
            depth[curr].r = max(depth[curr].r, depth[curr].pos);
        }
        else
        {
            int u, v, k;
            cin >> u >> v >> k;
            if (k >= depth[v].l && k <= depth[v].r)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
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