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
const int maxn = 2e5;
ll dist[maxn];
bool visited[maxn];
vector<pii> adj[maxn];
const ll INF = 1e18;
priority_queue<pll> pq;

void dijk(int x)
{
    dist[x] = 0;
    pq.push({0, x});
    while (!pq.empty())
    {
        int a = pq.top().se;
        pq.pop();
        if (visited[a])
        {
            continue;
        }
        visited[a] = true;
        for (auto u : adj[a])
        {
            ll b = u.fi, w = u.se;
            if (dist[a] + w < dist[b])
            {
                dist[b] = dist[a] + w;
                pq.push({-dist[b], b});
            }
        }
    }
}
void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; ++i)
    {
        dist[i] = INF;
    }
    for (int i = 0; i < m; i++)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        adj[a].pb(mp(b, w));
    }
    memset(visited, false, sizeof(visited));
    dijk(1);
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (dist[a] == INF || dist[b] == INF)
            cout << -1 << '\n';
        else
            cout << abs(dist[a] - dist[b]) << '\n';
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