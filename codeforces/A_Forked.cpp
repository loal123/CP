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
    int a, b;
    cin >> a >> b;
    int xk, xy;
    cin >> xk >> xy;
    int qx, qy;
    cin >> qx >> qy;

    int distx = abs(qx - xk);
    int disty = abs(qy - xy);
    bool can1 = false;
    int ans = 0;
    if (abs(qx - a) == abs(xk - b) && abs(qy - b) == abs(xy - a))
    {
        ans++;
    }
    if (abs(qx - b) == abs(xk - a) && abs(qy - a) == abs(xy - b))
    {
        ans++;
    }

    cout << ans << endl;
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