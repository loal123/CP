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
vector<vi> adj;
const int maxn = 1e5 + 5;
vi depth;
void dfs(int v, int l)
{
    for (auto u : adj[v])
    {
        if (u != l)
        {
            depth[u] = depth[v] + 1;
            dfs(u, v);
        }
    }
}

void solve()
{

    int n;
    cin >> n;
    adj = vector<vi>(n, vi());
    depth = vi(n, 0);
    depth[0] = 1;

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    ll odd = 0;
    ll even = 0;
    dfs(0, -1);
    for (int i = 0; i < n; i++)
    {
        if (depth[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << (ll)even * (even - 1) / 2 + odd * (odd - 1) / 2 << '\n';
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