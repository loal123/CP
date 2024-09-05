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
#define int ll
const int maxn = 1e5 + 10;
vi assigned(maxn, 0);
vi adj[maxn];
vector<bool> vis(maxn);
bool has = false;
ll ans = 0;
int two = 0;
int one = 0;
vi temp;

void dfs(int v)
{
    if (has)
        return;
    int curr = assigned[v];
    int ncolor = (curr == 1 ? 2 : 1);
    for (auto u : adj[v])
    {
        if (assigned[u] != 0)
        {
            if (assigned[u] != ncolor)
            {
                has = 1;
                return;
            }
        }
        else
        {
            assigned[u] = ncolor;
            dfs(u);
        }
        if (has)
            return;
    }
}
void rdfs(int v)
{
    if (vis[v])
        return;
    vis[v] = 1;
    temp.pb(v);

    for (auto u : adj[v])
        rdfs(u);
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
    for (int i = 0; i < n; i++)
    {
        if (assigned[i] == 0)
        {
            assigned[i] = 1;
            dfs(i);
        }
    }

    if (has)
    {
        cout << 0 << " " << 1 << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            temp.clear();
            rdfs(i);
            int red = 0;
            int blue = 0;
            if (SZ(temp) == 1)
                one++;
            else if (SZ(temp) == 2)
                two++;
            else
            {
                for (auto i : temp)
                {
                    if (assigned[i] == 1)
                        red++;
                    else
                        blue++;
                }

                ans += (ll)red * (red - 1) / 2;

                ans += (ll)blue * (blue - 1) / 2;
            }
        }
    }
    if (ans)
    {
        cout << 1 << " " << ans << '\n';
        return;
    }
    if (m == 0)
    {
        cout << 3 << " " << (ll)n * (n - 1LL) * (n - 2LL) / 6LL;
        return;
    }
    cout << 2 << " " << (ll)two * one + (4LL * (two * (two - 1LL) / 2LL));
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}