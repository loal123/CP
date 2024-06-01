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
    int a, b, c;
    cin >> a >> b >> c;
    if (c - a != 1)
    {
        cout << -1 << '\n';
        return;
    }
    int curr = 1;
    int rem = 0;

    while (a > 0)
    {
        if (a - curr >= 0)
        {
            a -= curr;
            curr++;
            // take out all the a
        }
        else
        {
            // find how much we have left after a gone

            rem = c - a;
            a = 0;
        }
    }
    if (b - rem < 0)
    {
        cout << curr - 1 << '\n';
    }
    else
    {
        b -= rem;
        cout << curr + (b + (c - 1) - rem) / c << '\n';
    }
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