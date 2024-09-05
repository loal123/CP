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

const int maxn = 2e5 + 5;
vi adj[maxn];
vi coloring(maxn);
bool dfs(int v)
{
    int curr = coloring[v];
    int ncolor = (curr == 1 ? 2 : 1);
    for (auto u : adj[v])
    {
        if (coloring[u] == 0)
        {
            coloring[u] = ncolor;
            if (!dfs(u))
                return false;
        }
        else
        {
            if (coloring[u] != ncolor)
                return false;
        }
    }
    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }

    for (int i = 0; i < n; i++)
    {
        if (coloring[i] == 0)
        {
            coloring[i] = 1;
            if (!dfs(i))
            {
                cout << -1 << '\n';
                return;
            }
        }
    }
    vi ans;
    for (int i = 0; i < n; i++)
    {
        if (coloring[i] == 1)
            ans.pb(i);
    }
    cout << SZ(ans) << '\n';
    for (auto i : ans)
        cout << i + 1 << " ";
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