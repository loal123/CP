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
const int maxn = 200005;
vi adj[maxn];
bool realvis[maxn];
void dfs(int s, bool vis[], int &counts, int l, int r)
{
    if (vis[s])
        return;
    counts++;

    vis[s] = true;
    for (auto i : adj[s])
    {
        if (i >= l && i <= r)
        {
            dfs(i, vis, counts, l, r);
        }
    }
}
void solve()
{
    memset(realvis, 0, sizeof(realvis));
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }

    // int total = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         bool vis[n] = {0};
    //         for (int k = 0; k < n; k++)
    //         {

    //             if (k >= i && k <= j)
    //             {

    //                 int counts = 0;
    //                 dfs(k, vis, counts, i, j);
    //                 if (counts < 3)
    //                     total += counts;
    //             }
    //         }
    //     }
    // }
    // cout << total;
    cout << (ll)n * (n + 1) * (n + 2) / 6;
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