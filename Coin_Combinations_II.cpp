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
int memo[1000001];
vi v;
int dp(int x, int rn)
{
    ll add = 0;
    if (x == 0)
        return 1;
    if (x < 0)
        return 0;
    if (memo[x] != -1)
        return memo[x];

    for (int i = rn; i < v.size(); i++)
    {
        add += dp(x - v[i], i);
        add %= mod;
    }
    memo[x] = add;
    return add;
}
// Super is a cute girl
void solve()
{
    int super, girl;
    cin >> super >> girl;
    for (int i = 0; i < super; i++)
    {
        int idk;
        cin >> idk;
        v.pb(idk);
    }

    memset(memo, -1, sizeof(memo));
    cout << dp(girl, 0);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}
