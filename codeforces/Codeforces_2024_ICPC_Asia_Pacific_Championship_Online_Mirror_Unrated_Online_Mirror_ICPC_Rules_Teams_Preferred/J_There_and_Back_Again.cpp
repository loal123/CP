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
// Super is the cutest girl
const int maxn = 100;

vector<vector<pii>> adj(maxn);
bool processed[maxn];
int distances[maxn];
int p[maxn];
int child[maxn];
int distances2[maxn];

void solve()
{
    int n, m;
    cin >> n >> m;
    memset(processed, 0, sizeof(processed));
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[--a].pb({--b, w});
        adj[b].pb({a, w});
    }
    for (int i = 1; i <= n; i++)
        distances[i] = INF;
    priority_queue<pii> q;
    int x = 0;
    distances[x] = 0;
    p[x] = -1;
    q.push({0, x});
    while (!q.empty())
    {
        int a = q.top().se;
        q.pop();
        if (processed[a])
            continue;
        processed[a] = true;
        for (auto u : adj[a])
        {
            int b = u.fi, w = u.se;
            if (distances[a] + w < distances[b])
            {
                distances[b] = distances[a] + w;
                q.push({-distances[b], b});
                p[u.fi] = a;
                child[a] = u.fi;
            }
        }
    }
    memset(processed, 0, sizeof(processed));
    int curr_node = n - 1;
    int curr = INF;

    while (p[curr_node] != -1)
    {
        for (auto i : adj[curr_node])
        {
            if (i.fi != p[curr_node])
            {
                curr = min(curr, i.se);
            }
        }
        cout << p[curr_node] << " ";
        curr_node = p[curr_node];
    }
    for (auto i : adj[0])
    {
        if (i.fi != child[0])
            curr = min(curr, i.se);
    }
    cout << distances[n - 1] * 2 + curr * 2 << endl;

    // remember to set maxn back to 1e5 +5
    // frotha nd back and find somehting * 2
    // now we search a path in which we can find a road
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