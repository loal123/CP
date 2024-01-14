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
const int maxn = 3e5 + 5;

// Super is a cute girl

void solve()
{
    int n;
    cin >> n;
    vi adj[n];
    bool vis[n];

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    memset(vis, false, sizeof(vis));
    queue<int> q;
    vi d(n), p(n);
    q.push(0);
    vis[0] = true;
    p[0] = -1;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : adj[v])
        {
            if (!vis[u])
            {
                vis[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
    int maxdist = 0;
    int maxpos = 0;
    for (int i = 1; i < n; i++)
    {
        if (d[i] > maxdist)
        {
            maxdist = d[i];
            maxpos = i;
        }
    }
    d.assign(n, 0);
    memset(vis, false, sizeof(vis));

    p[maxpos] = -1;
    vis[maxpos] = true;
    q.push(maxpos);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : adj[v])
        {
            if (!vis[u])
            {
                vis[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
    maxdist = 0;
    for (int i = 0; i < n; i++)
    {
        maxdist = max(d[i], maxdist);
    }
    cout << 3 * maxdist;
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