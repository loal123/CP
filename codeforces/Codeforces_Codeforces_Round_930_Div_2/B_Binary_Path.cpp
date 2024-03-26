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
string minim = "";
int n;
const int maxn = 2e5 + 5;
char a[2][maxn];

void solve()
{

    cin >> n;
    minim = "";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    minim += a[0][0];
    for (int i = 0; i < n; i++)
    {
        minim += a[1][i];
    }
    int counts = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[0][i] < minim[i])
            minim[i] = '0';
        if (a[0][i] > minim[i])
            break;
    }
    int dp[2][n + 1];
    dp[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[0][i] == minim[i])
            dp[0][i] = dp[0][i - 1];
        else
            dp[0][i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        dp[1][i] = 0;
        if (a[1][i] == minim[i + 1])
        {
            dp[1][i] += dp[0][i];
            if (i > 0)
                dp[1][i] += dp[1][i - 1];
        }
    }
    cout << minim << '\n'
         << dp[1][n - 1] << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}