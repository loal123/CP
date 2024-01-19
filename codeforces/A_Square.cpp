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
    vector<pii> v;
    int xmin = INF;
    int xmax = -INF;
    int ymin = INF;
    int ymax = -INF;
    for (int i = 0; i < 4; i++)
    {
        int a, b;
        cin >> a >> b;
        xmin = min(xmin, a);
        xmax = max(xmax, a);
        ymin = min(ymin, b);
        ymax = max(ymax, b);
    }

    cout << (ll)(xmax - xmin) * (ymax - ymin) << endl;
}]
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