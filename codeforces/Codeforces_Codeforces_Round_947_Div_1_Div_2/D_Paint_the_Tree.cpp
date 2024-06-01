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
const int MX = 2e5 + 5;
int maxi;
int d[MX];
int p[MX];
vector<vector<int>> adj;
void dfs(int node, int last)
{
    d[node] = d[last] + 1;
    p[node] = last;
    maxi = max(maxi, d[node]);
    for (auto to : adj[node])
    {
        if (to != last)
        {
            dfs(to, node);
        }
    }
}
vi simu(int x, int y)
{
    vi path;
    vi other;
    if (d[x] > d[y])
        swap(x, y);

    int depth = d[y] - d[x];

    path.pb(y);
    while (depth--)
    {
        y = p[y];
        path.pb(y);
    }
    if (x == y)
    {
        return path;
    }
    other.pb(x);
    while (p[x] != p[y])
    {
        x = p[x];
        y = p[y];
        other.pb(x);
        path.pb(y);
    }
    path.pb(p[y]);
    reverse(all(other));
    for (auto i : other)
        path.pb(i);

    return path;
}

void solve()
{
    maxi = -1;
    int n;
    cin >> n;
    adj = vector<vi>(n + 2);
    d[0] = -1;
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    if (a == b)
    {
        dfs(a, 0);
        cout << 2 * (n - 1) - maxi << '\n';
        return;
    }
    dfs(1, 0);

    vi ph = simu(a, b);
    int m = (SZ(ph));
    if (ph[0] != a)
        reverse(all(ph));

    int mid = (ph[(m - 1) / 2]);

    maxi = -1;
    dfs(mid, 0);
    cout << 2 * (n - 1) - maxi + (m - 1 - (m - 1) / 2) << '\n';
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