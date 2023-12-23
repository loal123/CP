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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
const int maxn = 2e5 + 5;

vi assigned;
vector<vi> adj;
// Super is a cute girl
bool dfs(int s)
{
    int curr = assigned[s];
    int ncolor = curr == 1 ? 2 : 1;
    for (int u : adj[s])
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
    int n;
    int m;
    cin >> n >> m;
    adj = vector<vi>(n);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    bool valid = true;
    assigned = vi(n);
    for (int i = 0; i < n; i++)
    {
        if (assigned[i] == 0)
        {
            assigned[i] = 1;
            if (!dfs(i))
            {
                valid = false;
                break;
            }
        }
    }
    if (valid)
    {
        for (int i = 0; i < n; i++)
        {
            cout << assigned[i] << " \n"[i == n - 1];
        }
    }
    else
    {
        cout << "IMPOSSIBLE";
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