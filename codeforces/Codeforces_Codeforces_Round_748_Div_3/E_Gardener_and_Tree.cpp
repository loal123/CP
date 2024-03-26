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
// Super is the cutest girl
const int maxn = 4e5 + 5;
vector<vi> adj;
queue<int> leaves;
bool visited[maxn];
void dfs(int u, int e)
{
    if (adj[u].size() == 1)
    {
        leaves.push(u);
        visited[u] = 1;
    }
    for (auto i : adj[u])
    {
        if (i != e)
        {
            dfs(i, u);
        }
    }
}
void solve()
{

    int n, k;
    cin >> n >> k;
    vi rem(n);
    vi layer(n);
    adj = vector<vector<int>>(n);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
        rem[a]++;
        rem[b]++;
    }
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        if (rem[i] == 1)
        {
            layer[i] = 1;
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto i : adj[u])
        {
            if (rem[i] != 1)
            {
                rem[i]--;

                if (rem[i] == 1)
                {
                    layer[i] = layer[u] + 1;
                    q.push(i);
                }
            }
        }
    }
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        if (layer[i] <= k)
            counts++;
    }
    cout << n - counts << endl;
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