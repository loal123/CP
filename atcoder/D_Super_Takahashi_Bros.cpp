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
const int maxn = 2e5 + 5;
ll dist[maxn];
bool processed[maxn];
vector<pll> adj[maxn];
// Super is the cutest girl
void solve()
{
    memset(processed, 0, sizeof(processed));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        w--;
        adj[i].pb({w, b});
        adj[i].pb({i + 1, a});
    }
    priority_queue<pll> q;
    ll x = 0;
    for (ll i = 1; i <= n; i++)
        dist[i] = INFF;
    dist[x] = 0;
    q.push({0, x});
    while (!q.empty())
    {
        ll a = q.top().second;
        q.pop();
        if (processed[a])
            continue;
        processed[a] = true;
        for (auto u : adj[a])
        {
            ll b = u.first, w = u.second;
            if (dist[a] + w < dist[b])
            {
                dist[b] = dist[a] + w;
                q.push({-dist[b], b});
            }
        }
    }
    cout << dist[n - 1];
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