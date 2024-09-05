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
vector<bool> vis;
vector<vector<int>> adj;
vi missing;
void dfs(int node)
{
    if (vis[node])
        return;
    vis[node] = 1;
    for (auto i : adj[node])
    {
        dfs(i);
    }
}
// Super is the cutest girl
vector<bool> xd;
void solve()
{
    int n, k;
    cin >> n >> k;
    adj = vector<vi>(n);
    vis = vector<bool>(n, 0);
    string s,
        t;
    cin >> s >> t;
    map<int, int> m1;
    map<int, int> m2;
    for (int i = 0; i < n; i++)
    {
        m1[s[i]]++;
        m2[t[i]]++;
        if (s[i] != t[i])
        {
            missing.pb(i);
        }
    }
    int curr = 0;

    for (auto i : m1)
    {
        if (m2[i.fi] != i.se)
        {
            cout << "NO\n";
            missing.clear();
            return;
        }
    }

    for (int i = 0; i < n - k; i++)
    {
        adj[i].pb(i + k);
        adj[i + k].pb(i);
        if (i + k + 1 < n)
        {
            adj[i].pb(i + k + 1);
            adj[i + k + 1].pb(i);
        }
    }
    if (SZ(missing) == 0)
    {
        cout << "YES\n";
        return;
    }
    dfs(0);
    bool can = true;
    for (auto i : missing)
    {
        if (!vis[i])
        {
            can = false;
        }
    }

    cout << (can ? "YES\n" : "NO\n");
    missing.clear();
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