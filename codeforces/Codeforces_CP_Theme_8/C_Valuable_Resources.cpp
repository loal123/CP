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
    ll xleft = INF, xright = -INF, yleft = INF, yright = -INF;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        xleft = min(a, xleft);
        xright = max(a, xright);
        yleft = min(b, yleft);
        yright = max(b, yright);
    }

    cout << pow2(max(xright - xleft, yright - yleft));
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