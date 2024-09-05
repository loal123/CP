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
int depth[maxn];
void dfs(int v, int curr)
{
    depth[curr]++;
    for (auto i : adj[v])
        dfs(i, curr + 1);
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        x--;
        adj[x].pb(i);
    }
    int ans = 0;
    dfs(0, 0);
    for (int i = 0; i < n + 1; i++)
    {
        if (depth[i] & 1)
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
    // int t; cin >> t; while(t--)
    solve();
}