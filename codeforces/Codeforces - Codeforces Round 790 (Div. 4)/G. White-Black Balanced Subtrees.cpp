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
vector<vector<int>> adj;
const int maxn = 4005;

bool vis[maxn];
vi counts;
string S;
void dfs(int s, int e)
{
    counts[s] = (S[s] == 'W' ? 1 : -1);
    for (auto u : adj[s])
    {
        if (u == e)
            continue;
        dfs(u, s);
        counts[s] += counts[u];
    }
}

// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vis[i] = 0;
    }
    adj = vector<vi>(n);
    counts = vi(n);
    for (int i = 1; i <= n - 1; i++)
    {
        int x;
        cin >> x;
        x--;

        adj[i].pb(x);
        adj[x].pb(i);
    }
    int ans = 0;

    cin >> S;
    dfs(0, -1);
    for (auto i : counts)
    {
        if (i == 0)
            ans++;
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