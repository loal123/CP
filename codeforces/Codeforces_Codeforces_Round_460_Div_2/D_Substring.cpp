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
const int maxn = 3e5 + 5;
vector<vi> dp(maxn, vi(26, 0));
vector<bool> visited(maxn);
vi adj[maxn];
vi ans;
int n, m;

void dfs(int v)
{
    visited[v] = true;
    for (int u : adj[v])
    {
        if (!visited[u])
            dfs(u);
    }
    ans.push_back(v);
}

void topological_sort()
{
    visited.assign(n, false);
    ans.clear();
    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
    reverse(ans.begin(), ans.end());
}
void solve()
{

    cin >> n >> m;
    string s;
    cin >> s;

    vi cnt(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        cnt[b]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (cnt[i] == 0)
            dp[i][s[i] - 'a'] = 1;
    }
    topological_sort();
    vector<int> ind(n);
    for (int i = 0; i < n; i++)
    {
        ind[ans[i]] = i;
    }

    // Check if the topological sort is valid
    bool valid = true;
    for (int i = 0; i < n; i++)
    {
        for (int j : adj[i])
        {
            if (ind[j] <= ind[i])
            {
                valid = false;
            }
        }
    }
    if (!valid)
    {
        cout << -1 << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int v = ans[i];
        vi stuff(26, 0);
        for (auto u : adj[v])
        {
            for (int j = 0; j < 26; j++)
            {
                dp[u][j] = max(dp[u][j], dp[v][j] + (j == (s[u] - 'a')));
            }
        }
    }
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, *max_element(all(dp[i])));
    }
    cout << maxi;
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