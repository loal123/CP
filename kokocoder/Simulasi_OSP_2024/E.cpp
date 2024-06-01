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
vi adj[maxn];
vector<bool> vis(maxn, 0);
vi xd;
vector<vi> listings;
void dfs(int s)
{
    if (vis[s])
        return;
    vis[s] = 1;
    xd.pb(s);
    for (auto u : adj[s])
    {
        dfs(u);
    }
}
struct info
{
    ll beauty, fish, happy;
};
void mergeset()
{
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<info> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].beauty >> v[i].fish >> v[i].happy;
    }

    ll maxi = 0;
    if (n <= 1000)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((v[i].beauty & v[j].beauty) > 0)
                {
                    adj[i].pb(j);
                    adj[j].pb(i);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                xd.clear();

                dfs(i);
                listings.pb(xd);
            }
        }
        for (int i = 0; i < SZ(listings); i++)
        {
            vector<vector<ll>> dp(SZ(listings[i]) + 2, vector<ll>(m + 2, 0));
            int sz = SZ(listings[i]);
            if (sz == 0)
                continue;
            for (int j = 1; j <= sz; j++)
            {
                for (int w = 0; w <= m; w++)
                {

                    dp[j][w] = dp[j - 1][w];
                    if (w - v[j - 1].fish >= 0)
                    {
                        dp[j][w] = max(dp[j][w], dp[j - 1][w - v[j - 1].fish] + v[j - 1].happy);
                    }
                }
            }

            for (int i = 0; i <= m; i++)
            {
                maxi = max(maxi, dp[sz][i]);
            }
        }
    }
    else
    {

        vi component[35];
        for (int i = 0; i < n; i++)
        {
            component[__lg(v[i].beauty)].pb(i);
        }

        for (int i = 0; i <= 31; i++)
        {
            vector<vector<ll>> dp(SZ(component[i]) + 2, vector<ll>(m + 2, 0));
            int sz = SZ(component[i]);
            if (sz == 0)
                continue;
            for (int j = 1; j <= sz; j++)
            {
                for (int w = 0; w <= m; w++)
                {

                    dp[j][w] = dp[j - 1][w];
                    if (w - v[j - 1].fish >= 0)
                    {
                        dp[j][w] = max(dp[j][w], dp[j - 1][w - v[j - 1].fish] + v[j - 1].happy);
                    }
                }
            }

            for (int i = 0; i <= m; i++)
            {
                maxi = max(maxi, dp[sz][i]);
            }
        }
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