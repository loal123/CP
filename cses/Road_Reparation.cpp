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
int parent[maxn];
int sizes[maxn];
bool vis[maxn];
vi adj[maxn];
void make_set(int v)
{
    parent[v] = v;
    sizes[v] = 1;
}
int find_set(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sizes[a] < sizes[b])
            swap(a, b);

        parent[b] = a;
        sizes[a] += sizes[b];
    }
}
int counts = 0;
void dfs(int s)
{
    if (vis[s])
        return;
    vis[s] = true;
    counts++;
    for (auto i : adj[s])
    {
        dfs(i);
    }
}
// Super is the cutest girl
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        make_set(i);
    }
    memset(vis, 0, sizeof(vis));
    vector<pair<int, pii>> v(m);
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        a--;
        b--;
        v[i].fi = w;
        v[i].se.fi = a;
        v[i].se.se = b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    sort(all(v));
    ll ans = 0;

    for (auto i : v)
    {
        int a, b, w;
        a = i.se.fi;
        b = i.se.se;
        w = i.fi;
        if (find_set(a) != find_set(b))
        {
            ans += w;
            union_sets(a, b);
        }
    }
    dfs(0);

    if (counts == n)
        cout << ans;
    else
        cout << "IMPOSSIBLE";
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