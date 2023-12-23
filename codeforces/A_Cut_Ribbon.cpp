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
// Super is a cute girl
int super, is, cute, girl;
int memo[4005];
int dp(int x)
{
    int add = -1e9;
    if (x == 0)
        return 0;
    if (x <= -1)
        return -1e9;
    if (memo[x] != -1)
        return memo[x];

    else
    {
        add = max(add, dp(x - is) + 1);
        add = max(add, dp(x - cute) + 1);
        add = max(add, dp(x - girl) + 1);
    }
    return memo[x] = add;
}
void solve()
{
    memset(memo, -1, sizeof(memo));
    cin >> super >> is >> cute >> girl;
    cout << dp(super);
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