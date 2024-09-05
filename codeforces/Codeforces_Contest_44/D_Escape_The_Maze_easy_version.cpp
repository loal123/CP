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
vector<vi> adj;
vi vis;
void solve()
{
    int n, k;
    cin >> n >> k;
    vi fr(k);
    adj = vector<vi>(n);
    vis = vi(n, 0);
    for (int &i : fr)
    {
        cin >> i;
        i--;
    }
    vi deg(n);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
        deg[a]++;
        deg[b]++;
    }

    queue<int> q;

    for (auto i : fr)
    {

        vis[i] = 2;
        q.push(i);
    }
    q.push(0);
    vis[0] = 1;
    while (!q.empty())
    {
        int curr = q.front();

        q.pop();
        for (auto u : adj[curr])
        {
            if (vis[u] == 0)
            {
                vis[u] = vis[curr];
                q.push(u);
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (deg[i] == 1)
        {
            if (vis[i] == 1)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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