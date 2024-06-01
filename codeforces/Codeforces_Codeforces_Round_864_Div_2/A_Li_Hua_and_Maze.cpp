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
// Super is the cutest girl
void solve()
{
    int n, m;
    cin >> n >> m;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if ((x1 == 1 && y1 == 1) || (x2 == 1 && y2 == 1) || (x1 == n && y1 == m) || (x2 == n && y2 == m) || (x1 == 1 && y1 == m) || (x2 == 1 && y2 == m) || (x1 == n && y1 == 1) || (x2 == n && y2 == 1))
    {
        cout << 2 << endl;
    }
    else if (x1 == 1 || y1 == 1 || x2 == 1 || y2 == 1 || x1 == n || y1 == m || x2 == n || y2 == m)
    {
        cout << 3 << endl;
    }
    else
        cout << 4 << endl;
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