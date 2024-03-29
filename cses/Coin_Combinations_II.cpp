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
const int maxn = 1e6 + 5;
int dp[maxn];
// Super is a cute girl
void solve()
{
    int n, k;
    cin >> n >> k;
    memset(dp, 0, sizeof(dp));
    int a[n];
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (auto i : a)
    {

        for (int j = 1; j <= k; j++)
        {
            int left = j - i;
            if (left >= 0)
            {
                dp[j] += dp[j - i];
                dp[j] %= mod;
            }
        }
    }
    cout << dp[k];
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