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
    int n;
    cin >> n;
    vi has[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i - (x - 1) >= 0)
            has[i - (x - 1)].pb(i);
    }
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            dp[i] = max(dp[i - 1], dp[i]);
        for (int j = 0; j < has[i].size(); j++)
        {
            dp[has[i][j] + 1] = max(dp[has[i][j] + 1], dp[i] + j + 1);
        }
    }
    cout << n - *max_element(dp, dp + n + 1);
    
    
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