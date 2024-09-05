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
    set<pii> has;
    int n;
    cin >> n;
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi >> v[i].se;
        has.insert(v[i]);
    }
    for (auto i : v)
    {
        int l = i.fi, r = i.se;
        if (l == r)
        {
            cout << l << " " << r << " " << l << '\n';
            continue;
        }
        for (int i = l; i <= r; i++)
        {

            if ((has.count({l, i - 1}) || i == l) && (has.count({i + 1, r}) || i == r))
            {
                cout << l << " " << r << " " << i << '\n';
                break;
            }
        }
    }
    cout << '\n';
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