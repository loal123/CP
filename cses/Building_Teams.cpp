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
const ll mod = 1e9 + 7;
const int maxn = 1e5 + 5;
vi adj[maxn];
bool visited[maxn];
void dfs(int s)
{
    if (visited[s])
        return;

    visited[s] = true;
    for (auto u : adj[s])
    {
        dfs(u);
    }
}

// Super is a cute girl
void solve()
{
    memset(visited, false, sizeof(visited));
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
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