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
int memo[1000001] = {-1};
int counts = 0;
ll dp(int x)
{
    ll add = 1;
    if (x <= 0)
        return 0;

    else
    {
        for (int i = 1; i <= 6; i++)
        {
            if (memo[x - i] != -1)
            {
                add += memo[x - i];
            }
            else
            {
                add += dp(x - i);
            }
            add %= mod;
        }
    }
    memo[x] = add;
    return add;
}
void solve()
{
    int supercutegirl;
    cin >> supercutegirl;
    cout << dp(supercutegirl);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}