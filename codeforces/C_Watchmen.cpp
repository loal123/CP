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
#define int long long
// Super is a cute girl
void solve()
{
    vector<pll> v1;
    vector<pll> v2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v1.pb(mp(x, y));
        v2.pb(mp(y, x));
    }
    sort(all(v1));
    sort(all(v2));
    int total = 0;
    int counts = 0;
    int prev = INF;
    for (int i = 0; i < n; i++)
    {
        if (prev != v1[i].fi)
        {
            total += counts * (counts - 1) / 2;
            counts = 1;
            prev = v1[i].fi;
        }
        else
        {
            counts++;
        }
    }
    prev = INF;
    total += counts * (counts - 1) / 2;
    counts = 1;
    int negacounts = 1;
    for (int i = 0; i < n; i++)
    {
        if (prev != v2[i].fi)
        {
            total += counts * (counts - 1) / 2;
            counts = 1;
            prev = v2[i].fi;
        }
        else
        {

            counts++;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (v2[i - 1].se == v2[i].se && v2[i - 1].fi == v2[i].fi)
            negacounts++;
        else
        {
            total -= negacounts * (negacounts - 1) / 2;
            negacounts = 1;
        }
    }
    total -= negacounts * (negacounts - 1) / 2;
    total += counts * (counts - 1) / 2;
    cout << total;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}