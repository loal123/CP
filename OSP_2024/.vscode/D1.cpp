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
    string s;
    ll b;
    cin >> s >> b;
    int n = SZ(s);
    vl dp(n + 2);

    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        ll curr = 0;
        for (int j = i; j < n; j++)
        {
            curr = curr * 10 + s[j] - '0';

            if (curr >= b)
                break;

            dp[j + 1] += dp[i];
            dp[j + 1] %= mod;
        }
    }
    cout << dp[n];
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