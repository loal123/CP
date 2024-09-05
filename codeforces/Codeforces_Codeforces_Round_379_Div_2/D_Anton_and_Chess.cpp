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
map<int, vector<pii>> d1, d2, row, col;

void stuff(int x, int y, char c)
{
    int val;
    if (c == 'R')
        val = 1;
    else if (c == 'B')
        val = 2;
    else
        val = 3;

    row[x].pb({y, val});
    col[y].pb({x, val});
    d1[x - y].pb({x, val});
    d2[x + y].pb({x, val});
}
// Super is the cutest girl
void solve()
{
    int n;
    int kx, ky;
    cin >> n >> kx >> ky;
    stuff(kx, ky, 0);

    for (int i = 0; i < n; i++)
    {
        char c;
        int x, y;

        cin >> c >> x >> y;

        stuff(x, y, c);
    }

    sort(all(row[kx]));
    sort(all(col[ky]));
    sort(all(d1[kx - ky]));
    sort(all(d2[kx + ky]));
    vector<vector<pii>> a(4, vector<pii>());
    for (auto i : row[kx])
        a[0].pb(i);
    for (auto i : col[ky])
        a[1].pb(i);
    for (auto i : d1[kx - ky])
        a[2].pb(i);
    for (auto i : d2[kx + ky])
        a[3].pb(i);

    bool can = false;
    for (int i = 0; i < 4; i++)
    {
        int sz = SZ(a[i]);
        int l = 0, r = sz - 1;
        int curr;
        if (i == 0)
            curr = ky;
        else
            curr = kx;
        int idx;

        int check;
        if (i < 2)
            check = 1;
        else
            check = 2;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[i][mid].fi == curr)
            {
                idx = mid;
                break;
            }
            if (a[i][mid].fi > curr)
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        if (idx > 0)
            if (a[i][idx - 1].se & check)
                can = true;
        if (idx < sz - 1)
        {
            if (a[i][idx + 1].se & check)
                can = true;
        }
    }
    if (can)
        cout << "YES\n";
    else
        cout << "NO\n";
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