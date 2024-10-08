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
const int maxn = 1e5 + 5;
vector<pll> adj[maxn];
void solve()
{
    priority_queue<pll> pq;
    int n, m;
    cin >> n >> m;
    int s, t;
    cin >> s >> t;
    int u, v;
    cin >> u >> v;
    s--;
    t--;
    u--;
    v--;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        ll w;
        cin >> a >> b;
        cin >> w;
        adj[--a].pb({--b, w});
        adj[b].pb({a, w});
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