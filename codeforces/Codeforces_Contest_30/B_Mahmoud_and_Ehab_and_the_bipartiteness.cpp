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
const int maxn = 1e5 + 5;

vi adj[maxn];
vi depth(maxn, 0);
vi c(maxn, 0);
ll ans = 0;
pii curr;
void dfs(int node, int last, int deep)
{

    depth[deep]++;
    for (auto neigh : adj[node])
    {
        if (neigh != last)
        {
            c[node]++;
            dfs(neigh, node, deep + 1);
        }
    }

    if (deep & 1)
    {
        curr.fi++;
        ans += curr.se - c[node];
    }
    else
    {
        curr.se++;
        ans += curr.fi - c[node];
    }
}
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    dfs(0, -1, 1);

    cout << ans;
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