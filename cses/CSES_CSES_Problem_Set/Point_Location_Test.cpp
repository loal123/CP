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
struct p
{
    int x, y;
};
ll loctest(p a, p b, p c)
{
    return 1LL * (a.y - b.y) * (b.x - c.x) - 1LL * (a.x - b.x) * (b.y - c.y);
}

void solve()
{
    p a, b, c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    ll ans = loctest(a, b, c);
    if (ans == 0)
        cout << "TOUCH\n";
    else if (ans < 0)
        cout << "LEFT\n";
    else
        cout << "RIGHT\n";
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