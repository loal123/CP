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

int dp(int x, int y)
{
    int add = 0;
    if (x == y)
        return 0;
    if (x > y)
        return x - y;
    if (x <= 0 && y > 0)
        return -1;

    if (y % 2 == 1)
        return 1 + dp(x, y + 1);
    else
        return 1 + dp(x, y / 2);
}
void solve()
{
    int super, girl;
    cin >> super >> girl;
    cout << dp(super, girl);
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