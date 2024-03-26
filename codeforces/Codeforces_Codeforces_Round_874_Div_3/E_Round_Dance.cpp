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
const int maxn = 2e5 + 5;
vector<set<int>> adj;
vector<bool> vis;
int mini = 0;
int acmini = 3;

void dfs(int s)
{
    if (vis[s])
        return;
    vis[s] = 1;
    acmini = min(acmini, SZ(adj[s]));
    for (auto u : adj[s])
    {
        dfs(u);
    }
}
void solve()
{
    int n;
    cin >> n;
    adj = vector<set<int>>(n);
    vis = vector<bool>(n, 0);

    int other = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        adj[--x].insert(i);
        adj[i].insert(x);
    }

    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            counts++;
            dfs(i);
            if (acmini == 2)
                mini++;
            else
                other++;
        }
        acmini = 3;
    }
    if (counts == 1)
    {
        mini = 1;
    }
    else if (other >= 1)
        mini++;
    if (mini == 0)
        mini = 1;
    cout << mini << " " << counts << '\n';

    mini = 0;
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