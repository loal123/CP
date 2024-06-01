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
const ll mod = 998244353;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    map<int, int> m;
    int l, r;
    cin >> l >> r;

    int curr = 0;
    while ((l << curr) <= r)
    {
        curr++;
    }
    ll ans = 0;

    ans += (r / (1 << (curr - 1))) - l + 1;

    if (curr >= 2)
    {
        int f = (1 << (curr - 2)) * 3;
        ans += (curr - 1) * max(0, (r / f) - l + 1);
    }

    cout << curr << " " << ans << '\n';

    // 2 2 2 3

    // 2 * 2 * 2 * 3
    //
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