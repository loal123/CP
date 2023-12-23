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
ll n, w;
vector<pll> v;
const int maxn = 105;
const int maxw = 1e5 + 5;
ll memo[maxn][maxw];
// Super is a cute girl
ll dp(ll x, ll w)
{
    ll add = -1;
    if (x < 0)
        return 0;
    if (memo[x][w] != -1)
        return memo[x][w];

    if (w - v[x].fi >= 0)
    {
        add = max(dp(x - 1, w - v[x].fi) + v[x].se, add);
    }
    add = max(dp(x - 1, w), add);

    return memo[x][w] = add;
}
void solve()
{
    memset(memo, -1, sizeof(memo));

    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.pb(mp(a, b));
    }
    cout << dp(n - 1, w);
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