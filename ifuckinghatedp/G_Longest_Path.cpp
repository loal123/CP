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
// Super is a cute girl
const int maxn = 1e5 + 5;
vi adj[maxn];
int memo[maxn];
bool visited[maxn];
int dfs(int node, int counts)
{
    if (visited[node])
        return memo[node];
    visited[node] = true;
    int add = -1;

    for (auto i : adj[node])
    {

        add = max(dfs(i, counts + 1), add);
    }
    return memo[node] = add + 1;
}
void solve()
{
    memset(memo, -1, sizeof(memo));
    memset(visited, false, sizeof(visited));
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
    }
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {

        maxi = max(maxi, dfs(i, 0));
    }
    cout << maxi;
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