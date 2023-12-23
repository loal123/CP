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
const int INF = 1e9 + 9;
vi v;
int n, k;
int memo[maxn];
int dp(int x)
{
    int add = INF;
    if (x == 0)
        return 0;
    if (memo[x] != -1)
        return memo[x];
    for (int i = 1; i <= k; i++)
    {
        if (x >= i)
        {
            add = min(add, dp(x - i) + abs(v[x] - v[x - i]));
        }
    }
    return memo[x] = add;
}
// Super is a cute girl
void solve()
{
    memset(memo, -1, sizeof(memo));

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    cout << dp(n - 1);
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