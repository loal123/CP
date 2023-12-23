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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll total1 = 0;
    ll total2 = 0;
    vl a;
    vl b;

    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        a.pb(z);
        total1 += z;
    }

    for (int i = 0; i < m; i++)
    {
        ll z;
        cin >> z;
        b.pb(z);
        total2 += z;
    }
    sort(b.rbegin(), b.rend());
    vector<pii> v;
    ll counts = 0;
    ll total = 0;
    ll prev = b[0];
    for (int i = 0; i < m; i++)
    {
        total += b[i];
        if (prev != b[i])
        {
            v.pb(mp(prev * counts, counts));
            counts = 1;
        }
        else
        {
            counts++;
        }
        prev = b[i];
    }
    ll totals = 0;
    bool can = false;
    v.pb(mp(prev * counts, counts));
    for (int i = 0; i < v.size(); i++)
    {
        double check1 = (double)total1 / n;
        double check2 = (double)total2 / m;

        if (check1 > check2)
        {
            can = true;
            break;
        }
        total1 += v[i].fi;
        total2 -= v[i].fi;
        n += v[i].se;
        m -= v[i].se;
        totals += v[i].fi;
    }
    if (m == 0)
        cout << -1;
    else if (!can)
        cout << -1;
    else
        cout << totals;
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