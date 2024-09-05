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
const int maxn = 2e5 + 5;
vi adj[maxn];
vector<bool> vis(maxn, 0);
// Super is the cutest girl

struct info
{
    ll dist, b, maxh, maxpos;
};
bool compare(info a, info b)
{
    return (a.dist <= b.dist);
}
void solve()
{
    // shortest path = max (0-1 dist, height) ?
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (int &i : a)
        cin >> i;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    priority_queue<info> pq;
    pq.push{{0, 0, -1, 0}};
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