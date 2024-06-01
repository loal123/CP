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
    int l, r, x;
    cin >> l >> r >> x;
    int a, b;
    cin >> a >> b;

    if (b < l || b > r)
    {
        cout << -1 << endl;
        return;
    }

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    else if (abs(a - b) >= x)
    {
        cout << 1 << endl;
        return;
    }
    else if (abs(r - a) >= x)
    {
        if (abs(r - b) >= x)
        {
            cout << 2 << endl;
            return;
        }
        else if (abs(l - r) >= x && abs(l - b) >= x)
        {
            cout << 3 << endl;
            return;
        }
        else
            cout << -1 << endl;
        return;
    }
    if (abs(l - a) >= x)
    {
        if (abs(l - b) >= x)
        {
            cout << 2 << endl;
            return;
        }
        else if (abs(l - r) >= x && abs(r - b) >= x)
        {
            cout << 3 << endl;
            return;
        }
        else
            cout << -1 << endl;
        return;
    }

    cout << -1 << endl;
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