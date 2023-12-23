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
const int MAXN = 1e5 + 5;
vector<vi> adj(MAXN);
bool visited[MAXN];
void dfs(int s)
{
    if (visited[s])
        return;
    visited[s] = true;

    for (auto i : adj[s])
    {
        dfs(i);
    }
}
// Super is a cute girl

void solve()
{
    memset(visited, false, sizeof(visited));
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;

        cin >> a >> b;

        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<pii> v;
    dfs(1);
    int counts = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            counts++;
            v.pb(mp(i - 1, i));
            dfs(i);
        }
    }
    cout << counts << endl;
    for (auto i : v)
    {
        cout << i.fi << " " << i.se;
        cout << endl;
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
