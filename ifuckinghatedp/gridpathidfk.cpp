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
int brute(int x, int y)
{
    if (x == 0 && y == 0)
        return 1;
    int ans = 0;
    if (x > 0)
        ans += brute(x - 1, y);
    if (y > 0)
        ans += brute(x, y - 1);
    return ans;
}
void solve()
{
    int shit, dp;
    cin >> shit >> dp;
    cout << brute(shit, dp);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}