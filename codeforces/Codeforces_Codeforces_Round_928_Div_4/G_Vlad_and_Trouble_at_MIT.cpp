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
string s;
const int maxn = 2e5 + 5;
vector<vector<int>> adj;
vector<vector<int>> reals;
int counts = 0;
queue<int> q;
void dfs(int v, int e, int last)
{
    for (auto u : adj[v])
    {
        if (u != e)
        {
            if (s[u] == 'C')
            {
                if (s[v] == 'C')
                    dfs(u, v, last);
                else
                    dfs(u, v, v);
            }
            else
            {
                if (last != -1)
                {
                    reals[last].pb(u);
                    reals[u].pb(last);
                    dfs(u, v, -1);
                }
                else
                {
                    reals[u].pb(v);
                    reals[v].pb(u);
                    dfs(u, v, last);
                }
            }
        }
    }
}
void realdfs(int v, int e)
{
    for (auto u : reals[v])
    {
        if (u != e)
        {
            if (s[u] != s[v])
                counts++;
            realdfs(u, v);
        }
    }
}
void solve()

{

    int n;
    cin >> n;
    adj = vector<vi>(n);
    reals = vector<vi>(n);
    for (int i = 1; i <= n - 1; i++)
    {
        int x;
        cin >> x;
        x--;
        adj[x].pb(i);
        adj[i].pb(x);
    }
    bool has = 0;
    int xd;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'C')
        {
            xd = i;
            has = 1;
            break;
        }
    }
    if (!has)
    {
        cout << 0 << '\n';
        return;
    }
    dfs(xd, -1, -1);
    realdfs(xd, -1);
    cout << counts << '\n';
    counts = 0;
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