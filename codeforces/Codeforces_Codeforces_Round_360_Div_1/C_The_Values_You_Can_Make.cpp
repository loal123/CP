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
    int n, k;
    cin >> n >> k;
    int a[n + 5];
    bool dp[2][510][510];
    memset(dp, 0, sizeof(dp));
    dp[0][0][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        int now = i % 2;
        int last = 1 - now;
        for (int j = 0; j <= k; j++)
        {
            for (int l = 0; l <= j; l++)
            {
                dp[now][j][l] = dp[last][j][l];

                if (j >= a[i])
                {
                    dp[now][j][l] |= dp[last][j - a[i]][l];
                    if (l >= a[i])
                    {
                        dp[now][j][l] |= dp[last][j - a[i]][l - a[i]];
                    }
                }
            }
        }
    }
    vi res;
    for (int i = 0; i <= k; i++)
    {
        if (dp[n % 2][k][i])
            res.pb(i);
    }
    cout << SZ(res) << '\n';
    for (auto i : res)
        cout << i << " ";

    cout << '\n';

    // 2 5 1 10
    // 6 10 2
    // 6 12
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