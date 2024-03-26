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
    ll n, m, h;
    cin >> n >> m >> h;
    vector<pll> p;
    ll place = 1;
    ll pos, pen;
    for (ll i = 0; i < n; i++)
    {
        vi xd;
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            xd.pb(x);
        }
        sort(all(xd));
        ll curr = 0;
        ll ans = 0;
        ll real = 0;
        for (auto k : xd)
        {
            int yeah = curr;
            curr += curr + k;
            real += k;
            if (real <= h)
                ans++;
            else
            {
                curr -= k + yeah;
                real -= k;
                break;
            }
        }
        if (i == 0)
        {
            pos = ans;
            pen = curr;
        }
        else
        {
            if (ans > pos)
                place++;
            else if (ans == pos)
            {
                if (curr < pen)
                    place++;
            }
        }
    }
    cout << place << '\n';
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