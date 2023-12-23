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
int dp(int x)
{
    int add = 0;
    if (x <= 4)
        return x;

    add += dp(x / 2) + dp(x / 3) + dp(x / 4);
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