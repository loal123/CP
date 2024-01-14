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
double ans = 0;
const int maxn = 1e5 + 5;
vi adj[maxn];
bool vis[maxn];
// Super is a cute girl
void dfs(int u, int l, double c)
{
    vis[u] = true;
    int poss = 0;
    for (auto i : adj[u])
    {
        if (!vis[i])
            poss++;
    }

    if (!poss)
    {
        ans += l * c;
    }
    else
    {
        double newp = c / poss;
        for (auto i : adj[u])
        {
            if (!vis[i])
                dfs(i, l + 1, newp);
        }
    }
}
void solve()
{
    int n;
    cin >> n;

    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }

    dfs(0, 0, 1);
    cout << setprecision(10) << ans;
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