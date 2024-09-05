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
const int maxn = 3e5 + 5;
vi adj[maxn];
vl subtree(maxn, 1LL);
vi p(maxn);
void dfs(int v, int l)
{
    for (auto u : adj[v])
    {
        if (u != l)
        {
            dfs(u, v);
            subtree[v] += subtree[u];
            p[u] = v;
        }
    }
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
    for (int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    dfs(x, -1);
    ll xd = subtree[y] + 1;
    ll ans = (ll)n * ((n - 1)) / 2;
    ll curr = y;
    while (p[curr] != x)
    {
        curr = p[curr];
    }

    cout << (ll)n * (n - 1) - subtree[y] * (subtree[x] - subtree[curr]) << '\n';
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