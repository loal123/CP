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
    int a, b;
    cin >> a >> b;
    int kx, ky, qx, qy;
    cin >> kx >> ky >> qx >> qy;
    int dx[8] = {a, -a, a, -a, b, -b, -b, b};
    int dy[8] = {b, -b, -b, b, a, -a, a, -a};
    int counts = 0;
    set<pii> s;
    for (int i = 0; i < 8; i++)
    {
        int X = kx + dx[i];
        int Y = ky + dy[i];
        if ((abs(X - qx) == a && abs(Y - qy) == b) || (abs(Y - qy) == a && abs(X - qx) == b))
            s.insert({X, Y});
    }

    cout << SZ(s) << '\n';
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