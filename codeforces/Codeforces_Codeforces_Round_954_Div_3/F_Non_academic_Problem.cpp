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

vector<vi> adj;
vi subtree_size;

void dfs(int v, int parent)
{
    subtree_size[v] = 1;
    for (int u : adj[v])
    {
        if (u != parent)
        {
            dfs(u, v);
            subtree_size[v] += subtree_size[u];
        }
    }
}

pair<int, pii> findEdgeCentroid(int n)
{
    int total_size = subtree_size[0];
    pair<int, pii> edge_centroid = {total_size, {0, 0}}; // {balance, {u, v}}

    function<void(int, int)> dfsEdgeCentroid = [&](int v, int parent)
    {
        for (int u : adj[v])
        {
            if (u != parent)
            {
                int part1_size = subtree_size[u];
                int part2_size = total_size - part1_size;
                int balance = abs(part1_size - part2_size);
                if (balance < edge_centroid.first)
                {
                    edge_centroid = {balance, {v, u}};
                }
                dfsEdgeCentroid(u, v);
            }
        }
    };

    dfsEdgeCentroid(0, -1);
    return edge_centroid;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    adj = vector<vi>(n);
    subtree_size = vi(n, 0);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs(0, -1);
    pair<int, pii> edge_centroid = findEdgeCentroid(n);
    cout << "Edge centroid is between nodes: " << edge_centroid.second.first + 1 << " and " << edge_centroid.second.second + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}
