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
const int maxn = 105;
vi adj[maxn];
vector<bool> vis(maxn);
string ans = "NO\n";
void dfs(int v, int l)
{
    if (vis[v])
    {
        ans = "FHTAGN!\n";
        return;
    }
    vis[v] = 1;
    for (auto u : adj[v])
    {
        if (u != l)
            dfs(u, v);
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    dfs(0, -1);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            cout << "NO\n";
            return;
        }
    }
    if (n != m)
    {
        cout << "NO\n";
        return;
    }
    cout << ans;

    // try to prove that a simple cycle isnt guaranteed to be the answer
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