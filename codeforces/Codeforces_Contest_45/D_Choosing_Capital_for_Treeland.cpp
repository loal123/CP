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
map<pair<int, int>, bool> m;
const int maxn = 1e5 + 5;
vi adj[maxn];
vi dp1(maxn);
vi dp2(maxn);
void dfs1(int v, int l)
{
    for (auto u : adj[v])
    {
        if (u != l)
        {
            dfs1(u, v);
            if (!m[{v, u}])
            {
                dp1[v] += dp1[u] + 1;
            }
            else
                dp1[v] += dp1[u];
        }
    }
}
void dfs2(int v, int l)
{
    for (auto u : adj[v])
    {
        if (u != l)
        {
            dfs2(u, v);
        }
        if (!m[{v, u}])
        {
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vi deg(n);
    int root2;
    for (int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
        deg[a]++;
        deg[b]++;

        m[{a, b}] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (deg[i] == 1)
            root2 = i;
    }
    dfs1(0, -1);
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