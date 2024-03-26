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
void brutetest()
{
    int prev = 0;
    int curr = 1;
    vector<pii> v;
    for (int i = 1; i <= 30000; i++)
    {
        bool can = true;
        string xd = to_string(i);
        for (int j = 0; j < SZ(xd) - 1; j++)
        {
            if (xd[j] == xd[j + 1])
                can = false;
        }
        if (can)
        {
            cout << curr << " " << i << " Diff: " << i - curr << '\n';
            if (prev != i - curr)
                v.pb({curr, i - curr});
            prev = i - curr;
            curr++;
        }
    }
    for (auto i : v)
        cout << i.fi << " " << i.se << '\n';
}
void solve()
{
    // brutetest();
    ll x;
    cin >> x;
    ll ans = 0;

    for (ll i = 9; i <= 1e12; i *= 10)
    {
        int j = 1;
        while (x / (j * 9) > 0)
        {
            ans += (x - (i / 9)) / (j * i) * (i / 9);
            j = (ll)j * 9;
        }
    }
    cout << x + ans << '\n';

    // brutetest();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}