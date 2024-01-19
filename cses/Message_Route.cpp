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
void solve()
{
    int n, m;
    cin >> n >> m;
    vi adj[n];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    bool vis[n];
    memset(vis, 0, sizeof(vis));
    queue<int> q;
    int s = 0;
    vis[s] = true;
    vi d(n);
    vi p(n);
    p[s] = -1;
    q.push(s);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (auto u : adj[v])
        {
            if (!vis[u])
            {
                vis[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
    int targ = n - 1;
    vi path;
    if (!vis[targ])
    {
        cout << "IMPOSSIBLE";
        return;
    }
    for (int v = targ; v != -1; v = p[v])
    {
        path.pb(v);
    }
    reverse(all(path));

    cout << path.size() << '\n';
    for (auto i : path)
        cout << i + 1 << " ";
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