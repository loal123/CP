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
const int maxn = 1e6 + 5;
int dp[maxn];
// Super is a cute girl
void solve()
{
    int n, x;
    cin >> n >> x;
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= maxn; i++)
    {
        dp[i] = INF;
    }

    dp[x] = 0;
    for (int i = x; i >= 1; i--)
    {
        for (auto j : a)
        {
            if (i - j >= 0)
            {
                dp[i - j] = min(dp[i - j], dp[i] + 1);
            }
        }
    }
    if (dp[0] == INF)
        cout << -1;
    else
        cout << dp[0];
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