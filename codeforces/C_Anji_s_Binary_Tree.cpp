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
const int maxn = 3e5 + 5;
// Super is a cute girl

int dp(int x, vector<pii> &adj, string &s)
{

    if (adj[x].fi == 0 && adj[x].se == 0)
        return 0;
    int ans = 1e9;
    if (adj[x].fi > 0)
    {
        if (s[x - 1] == 'L')
            ans = min(ans, dp(adj[x].fi, adj, s));
        else
            ans = min(ans, dp(adj[x].fi, adj, s) + 1);
    }
    if (adj[x].se > 0)
    {
        if (s[x - 1] == 'R')
            ans = min(ans, dp(adj[x].se, adj, s));
        else
            ans = min(ans, dp(adj[x].se, adj, s) + 1);
    }
    return ans;
}
void solve()
{
    string s;
    int n;
    cin >> n;
    vector<pii> adj(n + 1);

    cin >> s;
    int mini = 1e9;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[i].fi = a;
        adj[i].se = b;
    }
    cout << dp(1, adj, s) << endl;
    adj.clear();
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