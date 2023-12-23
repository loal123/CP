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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
const int maxn = 200005;
vi assigned;
vi adj[maxn];
bool visited[maxn];
// Super is a cute girl
bool dfs(int node, int par, int &cnt)
{
    if (visited[node])
        return true;
    visited[node] = true;
    for (auto i : adj[node])
    {
        if (i != par)
        {
            cnt++;
            if (dfs(i, node, cnt))
                return true;
        }
    }
    return false;
}
void solve()
{
    int n, m;
    cin >> n >> m;

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            int counts = 0;

            if (dfs(i, -1, counts))
                total += (counts % 2 == 1);
        }
    }
    if ((n - total) % 2 == 1)
        total++;
    cout << total;
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