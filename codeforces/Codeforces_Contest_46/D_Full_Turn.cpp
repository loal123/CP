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
    int n;
    cin >> n;
    map<ld, pii> m;
    pii unq;
    for (int i = 0; i < n; i++)
    {
        ld x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (y1 == y2)
        {
            if (x1 > x2)
                unq.fi++;

            else
                unq.se++;
        }
        else
        {
            if (y1 > y2)
                m[(x2 - x1) / (y2 - y1)].fi++;
            else
                m[(x2 - x1) / (y2 - y1)].se++;
        }
    }
    ll ans = 0;
    ans += unq.fi * unq.se;
    for (auto i : m)
    {
        ans += (ll)i.se.fi * i.se.se;
    }
    cout << ans << '\n';
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