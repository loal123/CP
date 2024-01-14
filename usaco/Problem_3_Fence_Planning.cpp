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
const int maxn = 1e5 + 5;
vi adj[maxn];
vector<pii> coor;
bool visited[maxn];
void dfs(int s, int &maxx, int &minx, int &maxy, int &miny)
{
    if (visited[s])
        return;
    visited[s] = true;
    maxx = max(maxx, coor[s].fi);
    minx = min(minx, coor[s].fi);
    maxy = max(maxy, coor[s].se);
    miny = min(miny, coor[s].se);

    for (auto i : adj[s])
    {
        dfs(i, maxx, minx, maxy, miny);
    }
}
// Super is a cute girl
void solve()
{
    memset(visited, false, sizeof(visited));
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        coor.pb(mp(x, y));
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    int minimal = INF;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            int maxx = coor[i].fi;
            int minx = coor[i].fi;
            int maxy = coor[i].se;
            int miny = coor[i].se;
            dfs(i, maxx, minx, maxy, miny);
            minimal = min((maxx - minx) * 2 + (maxy - miny) * 2, minimal);
        }
    }
    cout << minimal;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("fenceplan.in", "r", stdin);
    freopen("fenceplan.out", "w", stdout);
    // int t; cin >> t; while(t--)
    solve();
}