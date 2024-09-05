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
const int maxn = 5005;
vector<pll> adj[maxn];
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vi p(k);
    for (int i = 0; i < k; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < m; i++)
    {
        ll a, b, w;
        cin >> a >> b >> w;

        adj[a].pb({b, w});
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int s;
        cin >> s;

        int c[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> c[i];
        }
        vector<bool> vis(n, 0);
        vl dist(n, INFF);
        queue<int> q;
        q.push(s);
        dist[s] = 0;
        ll ans = INFF;
        while (!q.empty())
        {
            int v = q.front();
            if (vis[v])
                continue;
            q.pop();
            for (auto u : adj[v])
            {
                dist[u.fi] = min(dist[v] + u.second, dist[u.fi]);
                q.push(u.fi);
            }
            vis[v] = 1;
        }
        for (auto i : p)
        {
            ans = min(ans, dist[i]);
        }
        cout << (ans == INFF ? -1 : ans) << '\n';
    }
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