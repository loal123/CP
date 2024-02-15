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

    ll x, k;
    cin >> x >> k;
    vi yeah;
    yeah.pb(x);
    bool can = false;
    int rn = 1;

    bool has = false;
    int bruh = rn;
    for (int i = 0; i < yeah.size(); i++)
    {
        if (yeah[i] % 3 == 0)
        {
            has = true;
            yeah.pb(yeah[i] / 3 * 2);
            yeah.pb(yeah[i] / 3 * 1);
                }
    }
    for (auto i : yeah)
    {
        if (i == k)
            can = true;
    }
    cout << (can ? "YES" : "NO") << endl;
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