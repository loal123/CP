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
const int maxn = 1e5 + 5;
bool dp[105][maxn + 2];
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    dp[0][0] = 1;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= maxn; j++)
        {
            dp[i][j] = dp[i - 1][j];
            int prevs = j - a[i - 1];

            if (prevs >= 0 && dp[i - 1][prevs])
            {
                dp[i][j] = true;
            }
        }
    }
    vi v;
    for (int i = 1; i <= maxn; i++)
    {
        if (dp[n][i])
            v.pb(i);
    }
    cout << SZ(v) << '\n';
    for (auto i : v)
        cout << i << " ";
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