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
int val(string x)
{
    if (x == "DL")
        return 1;
    if (x == "UL")
        return 2;
    if (x == "UR")
        return 3;

    return 4;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int i1, j1, i2, j2;
    cin >> i1 >> j1 >> i2 >> j2;
    string d;
    cin >> d;
    int v;
    v = val(d);

    int ans = 0;
    vector<set<int>> has(5);
    while (1)
    {
        if (v == 1)
        {

            if (j1 + i1 == j2 + i2 && i2 >= i1)
            {

                cout << ans << '\n';
                return;
            }
            if (has[v].count(j1 + i1))
            {
                break;
            }
            has[v].insert(j1 + i1);
            int xd = min(n - i1, j1 - 1);
            i1 += xd;
            j1 -= xd;
            if (i1 == n && j1 == 1)
            {
                v = 3;
            }
            else if (i1 == n)
                v = 2;
            else
                v = 4;
        }
        else if (v == 2)
        {
            if (j1 - i1 == j2 - i2 && i1 >= i2)
            {
                cout << ans << '\n';
                return;
            }
            if (has[v].count(j1 - i1))
            {
                break;
            }
            has[v].insert(j1 - i1);
            int xd = min(i1 - 1, j1 - 1);

            i1 -= xd;
            j1 -= xd;
            if (i1 == 1 && j1 == 1)
            {
                v = 4;
            }
            else if (i1 == 1)
            {
                v = 1;
            }
            else
                v = 3;
        }
        else if (v == 3)
        {
            if (j1 + i1 == j2 + i2 && j2 >= j1)
            {
                cout << ans << '\n';
                return;
            }
            if (has[v].count(j1 + i1))
            {
                break;
            }
            has[v].insert(j1 + i1);
            int xd = min(i1 - 1, m - j1);
            i1 -= xd;
            j1 += xd;

            if (i1 == 1 && j1 == m)
            {
                v = 1;
            }
            else if (i1 == 1)
            {
                v = 4;
            }
            else
                v = 2;
        }
        else
        {
            if (j1 - i1 == j2 - i2 && j2 >= j1)
            {
                cout << ans << '\n';
                return;
            }
            if (has[v].count(j1 - i1))
            {
                break;
            }
            has[v].insert(j1 - i1);
            int xd = min(n - i1, m - j1);

            i1 += xd;
            j1 += xd;

            if (i1 == n && j1 == m)
            {
                v = 2;
            }
            else if (i1 == n)
                v = 3;

            else
                v = 1;
        }
        ans++;
    }
    cout << -1 << '\n';
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