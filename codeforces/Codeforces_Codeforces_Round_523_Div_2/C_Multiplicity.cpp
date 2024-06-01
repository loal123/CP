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
    ll a[n];
    vl dp(1e6 + 5, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        dp[a[i]] += dp[a[i] - 1];
        vi yeah;
        for (ll j = 2; (ll)j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                yeah.pb(j);
                if (a[i] / j != j)
                    yeah.pb(a[i] / j);
            }
        }
        sort(yeah.rbegin(), yeah.rend());
        dp[a[i]] += dp[a[i] - 1];
        for (auto k : yeah)
        {
            if (a[i] % k == 0)
            {
                dp[k] += dp[k - 1];
                dp[k] %= mod;

                if (a[i] / k != k)
                {
                    dp[a[i] / k] += dp[a[i] / k - 1];
                    dp[a[i] / k] %= mod;
                }
            }
        }
        dp[1]++;
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += dp[i];
    }
    cout << ans;
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