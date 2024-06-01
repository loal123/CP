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
const int maxn = 20;
ll dp[maxn][maxn];
int a[maxn][maxn];

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    dp[0][0] = 1;
    queue<pii> q;
    q.push({0, 0});
    while (!q.empty())
    {
        int i = q.front().fi;
        int j = q.front().se;
        q.pop();
        if (a[i][j] != 0)
            for (int k = 0; k <= a[i][j]; k++)
            {
                for (int l = 0; l <= a[i][j]; l++)
                {

                    if (i + k < n && j + l < m)
                    {
                        dp[i + k][j + l] += dp[i][j];
                        dp[i + k][j + l] %= mod;
                    }
                }
            }

        if (i + 1 < n)
            q.push({i + 1, j});

        if (j + 1 < m)
            q.push({i, j + 1});
    }

    cout << dp[n - 1][m - 1];
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