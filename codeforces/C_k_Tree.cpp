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
// Super is a cute girl
int memo[105][105];
int n, k, d;
int dp(int x, int depth, bool have)

{
    ll add = 0;
    if (x == 0)
    {
        if (have)
            return 1;
        else
            return 0;
    }
    if (x < 0)
        return 0;
    if (memo[x][depth] != -1)
        return memo[x][depth];

    for (int i = 1; i <= k; i++)
    {
        if (have || i >= d)

            add += dp(x - i, depth++, true);
        else
            add += dp(x - i, depth++, false);

        add %= mod;
    }
    memo[x][depth] = add;

    return add;
}
void solve()
{

    cin >> n >> k >> d;
    memset(memo, -1, sizeof(memo));

    cout << dp(n, 0, false);

    
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