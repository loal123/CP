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
const ll mod = 998244353;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;

// Super is the cutest girl
void solve()
{

    int n, k;
    cin >> n >> k;
    int dp[k + 20];
    for (int i = 0; i < k + 5; i++)
    {
        dp[i] = 0;
    }
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        char d;
        int x;
        cin >> d >> x;
        if (d == '+')
        {
            for (int i = k; i >= 0; i--)
            {
                if (i - x >= 0)
                {
                    dp[i] += dp[i - x];
                    dp[i] %= mod;
                }
            }
        }
        else
        {
            for (int i = 0; i <= k; i++)
            {
                if (i - x >= 0)
                {
                    dp[i] += (mod - dp[i - x]);
                    dp[i] %= mod;
                }
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