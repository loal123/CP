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
// Super is a cute girl
const int maxn = 1e5 + 5;
vi adj[maxn][2];
bool vis[maxn];
void dfs(int v, int x)
{
    vis[v] = true;
    for (auto i : adj[v][x])
    {
        if (!vis[i])
            dfs(i, x);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pii> cant;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a][0].pb(--b);
        adj[b][1].pb(a);
    }
    dfs(0, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            cout << "NO\n"
                 << 1 << " " << i + 1 << '\n';
            return;
        }
    }
    memset(vis, false, sizeof(vis));
    dfs(0, 1);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            cout << "NO\n"
                 << i + 1 << " " << 1 << '\n';
            return;
        }
    }
    cout << "YES";
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