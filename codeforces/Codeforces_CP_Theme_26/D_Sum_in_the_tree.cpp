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
vl adj[maxn];
vl a(maxn, 0);
vl s(maxn, 0);
bool can = true;
void dfs(int node, int last)
{

    ll mini = INF;
    for (auto neigh : adj[node])
    {
        if (neigh != last)
        {
            if (s[node] == -1)
            {

                mini = min(mini, s[neigh]);
            }
        }
    }
    if (last != -1)
    {
        if (s[node] == -1)
        {
            if (mini < s[last] && mini != INF)
            {
                can = false;
                return;
            }
            if (mini != INF)
            {
                a[node] = mini - s[last];
                s[node] = mini;
            }
            else
            {
                s[node] = s[last];
                a[node] = 0;
            }
        }
        else
        {

            a[node] = s[node] - s[last];
        }
    }
    for (auto neigh : adj[node])
    {
        if (neigh != last)
            dfs(neigh, node);
    }
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        adj[--x].pb(i);
        adj[i].pb(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    ll ans = 0;
    a[0] = s[0];
    dfs(0, -1);
    if (!can)
    {
        cout << -1;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }
    cout << ans;
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