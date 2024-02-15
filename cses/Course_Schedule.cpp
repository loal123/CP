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
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
const int maxn = 1e5 + 5;
// Super is the cutest girl
int vis[maxn];
vi adj[maxn];
vi top;
int n;
bool can = true;
void dfs(int s)
{
    for (auto i : adj[s])
    {
        if (!vis[i])
        {
            vis[i] = true;
            dfs(i);
        }
    }
    top.pb(s);
}
void solve()
{
    memset(vis, 0, sizeof(vis));

    int m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vis[i] = true;
            dfs(i);
        }
    }

    reverse(all(top));
    vi idx(n);
    for (int i = 0; i < n; i++)
    {
        idx[top[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        for (auto j : adj[i])
        {
            if (idx[j] <= idx[i])
            {
                cout << "IMPOSSIBLE";
                return;
            }
        }
    }

    for (auto i : top)
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