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
    vector<pii> a(n);
    vector<pii> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].fi;
        a[i].se = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i].fi;
        b[i].se = i;
    }

    vector<pii> v;
    for (int i = 0; i < n; i++)
    {
        v.pb({a[i].fi + b[i].fi, i});
    }
    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            a[v[i].se].fi = 0;
            b[v[i].se].fi--;
        }
        else
        {
            b[v[i].se].fi = 0;
            a[v[i].se].fi--;
        }
    }

    ll ans = 0;

    for (auto i : a)
        ans += i.fi;

    for (auto i : b)
        ans -= i.fi;

    // 1 2 4
    // 1 2 4

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