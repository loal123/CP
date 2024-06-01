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

const int maxn = 3e3 + 5;
ll dp[maxn][maxn];
vi adj[maxn];
vi v(maxn);

void solve()
{
    memset(dp, -1, sizeof(dp));
    int n, m, c;
    cin >> n >> m >> c;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
    }

    ll maxi = 0;
    dp[0][0] = 0;
    for (ll i = 0; i < 1001; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dp[i][j] != -1)
            {
                for (auto k : adj[j])
                {
                    dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + v[k]);
                }
            }
        }
    }
    for (int i = 0; i < 1001; i++)
    {
        maxi = max(maxi, dp[i][0] - (c * pow2(i)));
    }
    cout << maxi;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("time.in", "r", stdin);
    freopen("time.out", "w", stdout);
    // int t; cin >> t; while(t--)
    solve();
}