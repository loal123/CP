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
vi top;
const int maxn = 2e5 + 5;
bool vis[maxn];
void dfs(int s, vector<pii> adj[])
{
    for (auto i : adj[s])
    {
        if (!vis[i.fi])
        {
            vis[i.fi] = true;
            dfs(i.fi, adj);
        }
    }
    top.pb(s);
}

// Super is the cutest girl
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pii> adj[n];
    for (int i = 0; i < n; i++)
    {
        vis[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        a--;
        b--;
        if (w < 0)
        {
            adj[b].pb({a, -w});
        }
        else
            adj[a].pb({b, w});
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vis[i] = true;
            dfs(i, adj);
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
            if (idx[j.fi] <= idx[i])
            {
                cout << "NO\n";
                return;
            }
        }
    }

    queue<int> q;
    vector<bool> used(n);
    vector<int> d(n), p(n);
    int s = 0;
    q.push(s);
    used[s] = true;
    p[s] = -1;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (auto u : adj[v])
        {
            if (!used[u.fi])
            {
                used[u.fi] = true;
                q.push(u.fi);
                d[u.fi] = d[v] + u.se;
                p[u.fi] = v;
            }
            else
            {
                if (d[u.fi] != d[v] + u.se)
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
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