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
bool vis[maxn];
vi top;
vector<vector<int>> adj;
void dfs(int s, vi adj[])
{
    for (auto i : adj[s])
    {
        if (!vis[i])
        {
            vis[i] = true;
            dfs(i, adj);
        }
    }
    top.pb(s);
}

// Super is the cutest girl
void solve()
{

    int n, k;
    cin >> n >> k;
    vi adj[n + 1];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        vis[i] = 0;
    }
    for (int i = 0; i < k; i++)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n - 1; i++)
        {

            adj[a[i] - 1].pb(a[i + 1] - 1);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vis[i] = true;
            dfs(i, adj);
        }
    }
    reverse(all(top));
    vi idx(n);
    for (int i = 0; i < n; i++)
    {
        idx[top[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        for (auto j : adj[i])
        {
            if (idx[j] <= idx[i])
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}