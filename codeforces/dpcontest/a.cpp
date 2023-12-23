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
int n;
vi v;
int dp(int x)
{
    int maxn = -1;
    if (x == 0)
        return 0;
    if (x > 1)
    {
        maxn = max(maxn, dp(x - 2) + v[x - 2]);
    }

    maxn = max(maxn, dp(x - 1) + v[x - 1]);
    return maxn;
}
void solve()
{

    cin >> n;
    v.pb(0);
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    cout << dp(n);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int t; cin >> t; while(t--)
    solve();
}