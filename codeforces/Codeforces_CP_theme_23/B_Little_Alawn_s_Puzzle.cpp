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
ll ans = 1;
const int maxn = 4e5 + 5;
ll a[2][maxn];
ll pos[2][maxn];
bool vis[maxn];
// Super is the cutest girl
void dfs(int node)
{
    if (vis[node])
        return;
    vis[node] = 1;

    dfs(a[0][pos[1][node]]);
}
void solve()
{
    ans = 1;
    int n;
    cin >> n;

    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            pos[i][a[i][j]] = j;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            ans *= 2;
            ans %= mod;
        }
    }
    cout << ans << '\n';
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