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
    int n;
    cin >> n;
    int a[n];
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int yeah = a[n - 1];
    int bruh = a[n - 1];
    int zz = yeah % 10;
    if (__builtin_popcount(zz) == 1)
    {

        if ((yeah / 10) % 2 == 1)
        {
            yeah = 12;
        }
        else
            yeah = 2;
    }
    else if (zz == 5 || zz == 0)
    {
    }
    else
    {

        if ((yeah / 10) % 2 == 0)
            yeah = 12;
        else
            yeah = 2;
    }
    if (yeah % 10 == 5 || yeah % 10 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] != yeah)
            {
                if (a[i] % 10 == 5)
                {
                    if (a[i] + 5 == yeah)
                        continue;
                }
                cout << "No\n";
                return;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 10 == 0 || a[i] % 10 == 5)
            {
                cout << "No\n";
                return;
            }
            if (a[i] % 10 == 3)
                a[i] += 9;
            else if (a[i] % 10 == 6)
                a[i] += 6;
            else if (a[i] % 10 == 9)
                a[i] += 3;
            else if (a[i] % 10 == 7)
                a[i] += 5;
            else
            {
                a[i] += (2 - (a[i] % 10));
            }
            if ((abs(yeah - a[i])) % 20 != 0)
            {
                cout << "No\n";
                return;
            }
        }
    }
    cout << "Yes\n";

    // 10
    // 11 12 14 18 26 32 34 38 (main cycle)
    // 13 16 22 (skips)
    // 15 20 (once)
    // 17 24
    // 19 28 (skips)
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