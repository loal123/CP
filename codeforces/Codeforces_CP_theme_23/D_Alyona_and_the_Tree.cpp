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
const int maxn = 1e5 + 5;
vector<pll> adj[maxn];
vi a(maxn);
int ans = 0;
vector<bool> vis(maxn);
void dfs(int node, int last, ll curr, int nodes)
{
    if (curr < 0)
        curr = 0;
    if (a[node] < curr)
        return;
    vis[node] = 1;
    for (auto to : adj[node])
    {
        if (to.fi != last)
        {
            dfs(to.fi, node, curr + to.se, nodes);
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n - 1; i++)
    {
        ll b, w;
        cin >> b >> w;
        b--;
        adj[i].pb({b, w});
        adj[b].pb({i, w});
    }
    dfs(0, -1, 0, 0);
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += vis[i];
    }
    cout << n - ans << '\n';
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