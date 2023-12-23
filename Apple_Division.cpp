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
vl v;
int n;
// Super is a cute girl
ll dp(int x, ll sum1, ll sum2)
{
    if (x == n)
    {
        return abs(sum1 - sum2);
    }
    return min(dp(x + 1, sum1 + v[x], sum2), dp(x + 1, sum1, sum2 + v[x]));
}
void solve()
{

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        v.pb(z);
    }
    cout << dp(0, 0, 0);
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