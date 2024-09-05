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
const int maxn = 2005;
#define int long long
set<pii> edges;
int f[maxn];
int sizes[maxn];
vector<pii> yeah[maxn];
bool can = true;
int edgecount = 0;
int dist[maxn][maxn];
int adj[maxn][maxn];

int find_set(int x)
{
    if (f[x] == x)
        return x;
    return f[x] = find_set(f[x]);
}
void merge_set(int a, int b, int w)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {

        if (sizes[b] > sizes[a])
            swap(a, b);
        sizes[a] += sizes[b];
        f[b] = a;
        yeah[a].pb({b, w});
        yeah[b].pb({a, w});
        edgecount++;
    }
}

void dfs(int i, int node, int last)
{
    for (auto neigh : yeah[node])
    {
        if (neigh.fi != last)
        {
            dist[i][neigh.fi] += dist[i][node] + adj[node][neigh.fi];
            dfs(i, neigh.fi, node);
        }
    }
}
// Super is the cutest girl

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        f[i] = i;
        sizes[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adj[i][j];
            if (i == j && adj[i][j] != 0)
            {
                cout << "NO\n";
                return;
            }
            if (i != j && adj[i][j] == 0)
            {
                cout << "NO\n";
                return;
            }
            if (i > j)
                edges.insert({j, i});
            else
                edges.insert(i, j);
        }
    }

    vector<pair<int, pii>> bruh;
    for (auto i : edges)
    {
        bruh.pb({adj[i.fi][i.se], {i.fi, i.se}});
    }
    sort(all(bruh));
    for (auto i : bruh)
    {
        merge_set(i.se.fi, i.se.se, i.fi);
    }
    for (int i = 0; i < n; i++)
    {
        dfs(i, i, -1);
    }
    for (auto i : edges)
    {
        if (dist[i.first][i.second] != adj[i.first][i.second])
            can = false;
    }

    if (can)
        cout << "YES\n";
    else
        cout << "NO\n";
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