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
const int maxn = 105;
int counts[maxn];
vi adj[maxn];
bool vis[maxn];
void dfs(int v)
{
    if (vis[v])
        return;
    vis[v] = true;
    counts[v]++;
    for (auto i : adj[v])
    {
        dfs(i);
    }
}
void solve()
{
    int n;
    cin >> n;
    memset(counts, 0, sizeof(counts));
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
    }
    for (int i = 0; i < n; i++)
    {
        memset(vis, 0, sizeof(vis));
        dfs(i);
    }

    for (int i = 0; i < n; i++)
    {
        if (counts[i] == n)
        {
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);
    // int t; cin >> t; while(t--)
    solve();
}