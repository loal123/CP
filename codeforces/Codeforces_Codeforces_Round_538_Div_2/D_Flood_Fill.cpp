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
int dp[5005][5005];
void solve()
{
    int n;
    cin >> n;
    vi a(1);
    vi b;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != a.back())
            a.pb(x);
    }
    n = SZ(a) - 1;
    b = a;
    reverse(b.begin() + 1, b.end());

    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i] == b[j])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    cout << n - (dp[n][n] + 1) / 2 << '\n';
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