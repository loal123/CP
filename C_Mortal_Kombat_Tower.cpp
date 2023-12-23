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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
vi v;
int n;
int dp(int x, bool f)
{
    int add = 1e9;
    if (x == n)
        return 0;
    if (f)
    {
        if (x + 2 <= n)
            return min(dp(x + 2, false) + v[x] + v[x + 1], dp(x + 1, false) + v[x]);

        else
            return dp(x + 1, false);
    }
    else
    {
        if (x + 2 <= n)
            return min(dp(x + 2, true), dp(x + 1, true));
        else
            return dp(x + 1, true);
    }
}
void solve()
{

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    cout << dp(0, true) << '\n';
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