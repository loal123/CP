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

    vector<pii> d(n);
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i].se;
        if (d[i].se == 0)
            curr--;
        else
            curr++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> d[i].fi;
    }
    sort(all(d));
    vector<ll> l0;
    vector<ll> l1;
    for (int i = 0; i < n; i++)
    {
        if (d[i].se == 1)
            l1.pb(d[i].fi);
        else
            l0.pb(d[i].fi);
    }
    sort(all(l1));
    sort(all(l0));
    if (curr > 0)
    {
        ll ans = 0;
        for (int i = 0; i < SZ(l0); i++)
        {
            ans += l0[i] * 2;
        }
        for (int i = 0; i < SZ(l1); i++)
        {
            if (i < 1 + SZ(l1) - SZ(l0) - 1)
            {
                ans += l1[i];
            }
            else
                ans += l1[i] * 2;
        }
        cout << ans << endl;
    }
    else if (curr < 0)
    {
        ll ans = 0;
        for (int i = 0; i < SZ(l1); i++)
        {
            ans += l1[i] * 2;
        }
        for (int i = 0; i < SZ(l0); i++)
        {
            if (i < 1 + SZ(l0) - SZ(l1) - 1)
            {
                ans += l0[i];
            }
            else
                ans += l0[i] * 2;
        }
        cout << ans << endl;
    }
    else
    {
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < 1)
                ans += d[i].fi;
            else
                ans += d[i].fi * 2;
        }
        cout << ans << endl;
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