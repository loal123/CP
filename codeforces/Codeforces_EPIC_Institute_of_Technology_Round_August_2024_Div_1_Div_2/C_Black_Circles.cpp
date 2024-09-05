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
struct Point
{
    ll x, y;
};
void solve()
{
    int n;
    cin >> n;
    vector<Point> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].x >> v[i].y;
    }
    Point p1, p2;
    cin >> p1.x >> p1.y >> p2.x >> p2.y;
    ll curr = pow2(p1.x - p2.x) + pow2(p1.y - p2.y);
    // cout << curr << '\n';
    for (int i = 0; i < n; i++)
    {
        ll xd = pow2(v[i].x - p2.x) + pow2(v[i].y - p2.y);
        // cout << xd << '\n';
        if (xd <= curr)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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