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
const ll mod = 1e9 + 7;
const int maxn = 1e5 + 5;
int v[maxn][3];
int memo[maxn][4];
int dp(int x, int prev)
{
    int add = -1;
    if (x == -1)
        return 0;
    if (memo[x][prev] != -1)
        return memo[x][prev];

    for (int i = 0; i <= 2; i++)
    {
        if (i != prev)
        {
            add = max(dp(x - 1, i) + v[x][i], add);
        }
    }
    return memo[x][prev] = add;
}
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    memset(memo, -1, sizeof(memo));
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[i][0] = a;
        v[i][1] = b;
        v[i][2] = c;
    }
    cout << dp(n - 1, 3);
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