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
void solve()
{
    int n;
    cin >> n;
    vi adj[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    int s = 0;
    queue<int> q;
    q.push(s);
    bool visited[n + 5];
    memset(visited, 0, sizeof(visited));
    visited[s] = true;
    vi d(n);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }
    int maxi = -1;
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (d[i] > maxi)
        {
            pos = i;
            maxi = d[i];
        }
    }
    q.push(pos);
    memset(visited, 0, sizeof(visited));

    visited[pos] = true;
    d.assign(n, 0);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }
    maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(d[i], maxi);
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