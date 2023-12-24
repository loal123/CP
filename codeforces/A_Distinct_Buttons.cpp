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
    bool u = false, l = false, r = false, d = false;
    int n;

    int x = 0, y = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j, k;
        cin >> j >> k;
        if (j > 0)
            r = true;
        if (j < 0)
            l = true;
        if (k > 0)
            u = true;
        if (k < 0)
            d = true;

        x = j;
        y = k;
    }
    int counts = 0;
    if (u)
        counts++;
    if (l)
        counts++;
    if (r)
        counts++;
    if (d)
        counts++;
    cout << (counts <= 3 ? "YES" : "NO") << '\n';
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