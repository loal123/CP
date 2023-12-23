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
const ll mod = 1e9 + 7;
const int MAXN = 150005;
vi adj[MAXN];
bool visited[MAXN];
// Super is a cute girl
void dfs(int s, ll &vert, ll &edges)
{
    if (visited[s])
        return;
    visited[s] = true;
    vert++;
    edges += adj[s].size();
    for (int u : adj[s])
    {
        if (!visited[u])
        {
            dfs(u, vert, edges);
        }
    }
}
void solve()
{
    int super, girl;
    cin >> super >> girl;
    bool can = true;
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < girl; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for (int i = 1; i <= super; i++)
    {
        if (!visited[i])
        {
            ll vert = 0, edges = 0;
            dfs(i, vert, edges);
            if (edges != (ll)vert * (vert - 1))
                can = false;
        }
    }
    cout << (can ? "YES" : "NO");
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