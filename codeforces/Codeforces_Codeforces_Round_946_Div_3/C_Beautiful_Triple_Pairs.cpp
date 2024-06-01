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
    ll n;
    cin >> n;
    vi v(n);
    ll ans = 0;
    map<pii, map<ll, ll>> m1;
    map<pii, map<ll, ll>> m2;
    map<pii, map<ll, ll>> m3;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (ll i = 0; i < n - 2; i++)
    {
        m1[{v[i], v[i + 1]}][v[i + 2]]++;
        m2[{v[i], v[i + 2]}][v[i + 1]]++;
        m3[{v[i + 1], v[i + 2]}][v[i]]++;
    }

    for (auto i : m1)
    {
        bool has = false;

        ll curr = 1;
        if (i.se.size() > 1)
        {
            has = 1;
            ll xd = 0;

            for (auto j : i.se)
                xd += j.se;

            curr = ((ll)xd * (xd - 1) / 2);

            for (auto j : i.se)
                curr -= ((j.se) * (j.se - 1) / 2);
        }
        if (has)
            ans += curr;
    }
    for (auto i : m2)
    {
        bool has = false;

        ll curr = 1;
        if (i.se.size() > 1)
        {
            has = 1;
            ll xd = 0;

            for (auto j : i.se)
                xd += j.se;

            curr = ((ll)xd * (xd - 1) / 2);

            for (auto j : i.se)
                curr -= ((j.se) * (j.se - 1) / 2);
        }
        if (has)
            ans += curr;
    }
    for (auto i : m3)
    {
        bool has = false;

        ll curr = 1;
        if (i.se.size() > 1)
        {
            has = 1;
            ll xd = 0;

            for (auto j : i.se)
                xd += j.se;

            curr = ((ll)xd * (xd - 1) / 2);

            for (auto j : i.se)
                curr -= ((j.se) * (j.se - 1) / 2);
        }
        if (has)
            ans += curr;
    }

    cout << ans << endl;
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