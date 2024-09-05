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
vl cost;
vector<bool> vis;
vector<vi> adj;
ll dfs(int node)
{
    ll curr = 0;
    vis[node] = 1;

    for (auto i : adj[node])
    {
        if (!vis[i])
        {
            curr += dfs(i);
        }
        else
            curr += cost[i];
    }
    if (SZ(adj[node]) == 0)
        curr = INF;
    return cost[node] = min(cost[node], curr);
}
void solve()
{
    int n, k;
    cin >> n >> k;
    cost = vl(n);
    vis = vector<bool>(n);
    adj = vector<vi>(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        cost[x - 1] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int sz;
        cin >> sz;
        while (sz--)
        {
            int x;
            cin >> x;
            adj[i].pb(x - 1);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << cost[i] << " ";
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