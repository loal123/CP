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

ll ans = 0;
const int maxn = 1005;
vector<pii> adj[maxn];
vi cost(maxn);
void dfs(int node, int last)
{
    for (auto i : adj[node])
    {
        if (i.fi != last)
        {
            cost[i.fi] = cost[node] + i.se;
            dfs(i.fi, node);
        }
    }
}
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    cost[0] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].pb({b, w});
        adj[b].pb({a, w});
    }
    dfs(0, -1);

    cout << *max_element(all(cost));
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