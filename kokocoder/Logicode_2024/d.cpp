
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
    ll a[n + 1];
    ll h[n + 1];
    map<ll, ll> pos;
    map<ll, ll> harga;
    vector<pll> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
        v.pb({h[i], i});
        harga[i] = h[i];
    }
    // sort(all(v));
    // ll ans = 0;
    // for (auto i : v)
    // {
    //     if (i.se != a[i.se])
    //     {

    //         if (a[a[i.se]] == i.se)
    //         {
    //             ans += min(i.fi, h[a[i.se]]);
    //         }
    //         else
    //             ans += i.fi;

    //         swap(a[i.se], a[a[i.se]]);
    //     }
    // }
    // cout << ans;
    ll ans = 0;
    sort(all(v));
    for (auto i : v)
    {
        while (i.se != a[i.se])
        {
            ans += i.fi;
            swap(a[i.se], a[a[i.se]]);
        }
    }
    cout << ans;
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