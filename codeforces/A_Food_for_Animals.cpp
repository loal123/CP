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
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is a cute girl
void solve()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    x -= a;
    y -= b;
    if (x > 0 || y > 0)
    {
        int counts = 0;
        if (x > 0)
            counts += x;
        if (y > 0)
            counts += y;
        if (counts > c)
            cout << "NO";
        else
            cout << "YES";
    }
    else
        cout << "YES";

    cout
        << '\n';
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