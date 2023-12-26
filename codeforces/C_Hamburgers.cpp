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
    string s;
    cin >> s;
    ll bn = 0, sn = 0, cn = 0;
    ll total = 0;
    for (auto i : s)
    {
        if (i == 'B')
            bn++;
        else if (i == 'S')
            sn++;
        else
            cn++;
    }
    ll bc = 0, sc = 0, cc = 0;
    cin >> bc >> sc >> cc;
    ll bp, sp, cp;
    cin >> bp >> sp >> cp;
    ll r;
    cin >> r;

    ll idk = INFF;
    if (bn > 0)
        idk = min(idk, bc / bn);
    if (sn > 0)
        idk = min(idk, sc / sn);
    if (cn > 0)
        idk = min(idk, cc / cn);
    total += idk;
    bc -= idk * bn;
    sc -= idk * sn;
    cc -= idk * cn;

    ll costbal = 0;
    if (bn > 0)
        costbal += (ll)(bn - bc) * bp;
    if (sn > 0)
        costbal += (ll)(sn - sc) * sp;
    if (cn > 0)
        costbal += (ll)(cn - cc) * cp;
    if (r >= costbal)
    {
        total++;
        r -= costbal;
    }
    ll a = 0, b = INFF;
    while (a != b)
    {
        ll mid = (a + b) / 2;
    }
    ll realcostbal = 0;

    realcostbal += (ll)bn * bp;
    realcostbal += (ll)sn * sp;
    realcostbal += (ll)cn * cp;

    total += r / realcostbal;
    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}