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
const int maxn = 20;
ll dp[1 << maxn][maxn];
vi adj[maxn];

void dfs()
{
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--b].pb(--a);
    }

    dp[1][0] = 1;
    for (int s = 2; s < 1 << n; s++)
    {
        if ((s & (1 << 0)) == 0)
            continue;
        if ((s & (1 << (n - 1))) && s != ((1 << n) - 1))
            continue;

        for (int i = 0; i < n; i++)
        {
            if ((s & (1 << i)) == 0)
                continue;
  
            int prev = s - (1 << i);
            for (auto j : adj[i])
            {
                if (s & (1 << j))
                {
                    dp[s][i] += dp[prev][j];
                    dp[s][i] %= mod;
                }
            }
        }
    }
    cout << dp[(1 << n) - 1][n - 1];
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