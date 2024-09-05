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
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    vl a(100005, 0LL);

    a[1] = 1LL;
    vl curr(100005, 0);
    curr[1] = 1LL;
    for (ll i = 2; i <= 100001; i++)
    {
        curr[i] = (ll)curr[i - 1] * 10LL;
        curr[i] %= mod;
        a[i] += a[i - 1] + (((ll)i * curr[i]) % mod);

        a[i] %= mod;
    }
    string s;
    cin >> s;
    ll ans = 0;
    int n = SZ(s);
    for (ll i = 0; i < n; i++)
    {
        ll xd = s[i] - '0';
        ans += (ll)((((i * (i + 1)) / 2) % mod) * (xd) % mod) * curr[n - i];
        ans %= mod;
        ans += (ll)a[n - i - 1] * xd;
        ans %= mod;
    }
    cout << ans << endl;
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