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
void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vi black(m, 0);
    vi white(m, 0);
    vi bpref(m + 1, 0);
    vi wpref(m + 1, 0);

    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '#')
                black[j]++;
            else
                white[j]++;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        bpref[i] = bpref[i - 1] + black[i - 1];
        wpref[i] = wpref[i - 1] + white[i - 1];
    }
    vector<vi> dp(m + 2, vi(2, INF));
    dp[0][0] = 0;
    dp[0][1] = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = x; j <= y; j++)
        {
            if (i - j >= 0)
            {
                dp[i][0] = min(dp[i][0], dp[i - j][1] + bpref[i] - bpref[i - j]);
                dp[i][1] = min(dp[i][1], dp[i - j][0] + wpref[i] - wpref[i - j]);
            }
        }
    }
    cout << min(dp[m][0], dp[m][1]);
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