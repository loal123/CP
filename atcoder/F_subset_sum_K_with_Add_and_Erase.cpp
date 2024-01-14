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
const ll weirdmod = 998244353;
// Super is a cute girl

void solve()
{
    int q, k;
    cin >> q >> k;
    int dp[5005];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    while (q--)
    {
        char s;
        int x;
        cin >> s >> x;

        if (s == '+')
        {
            for (int i = k; i >= x; i--)
            {
                dp[i] += dp[i - x];
                dp[i] %= weirdmod;
            }
        }
        else
        {
            for (int i = x; i <= k; i++)
            {
                dp[i] += (weirdmod - dp[i - x]);
                dp[i] %= weirdmod;
            }
        }
        cout << dp[k] << '\n';
    }
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