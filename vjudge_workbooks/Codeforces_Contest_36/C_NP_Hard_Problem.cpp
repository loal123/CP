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
vi adj[maxn];
vi assigned(maxn);
bool dfs(int v)
{
    int curr = assigned[v];
    int ncolor = (curr == 1 ? 2 : 1);

    for (auto u : adj[v])
    {
        if (assigned[u] != 0)
        {
            if (assigned[u] != ncolor)
                return false;
        }
        else
        {
            assigned[u] = ncolor;

            if (!dfs(u))
                return false;
        }
    }
    return true;
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
            if (!dfs(i))
            {
                cout << -1 << '\n';
                return;
            }
        }
    }
    vi colors[3];
    for (int i = 0; i < n; i++)
    {
        colors[assigned[i]].pb(i + 1);
    }
    for (int i = 1; i <= 2; i++)
    {
        cout << SZ(colors[i]) << '\n';
        for (auto j : colors[i])
            cout << j << " ";

        cout << '\n';
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