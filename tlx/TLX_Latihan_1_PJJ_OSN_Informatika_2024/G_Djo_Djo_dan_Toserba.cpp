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
bool compare(pii a, pii b)
{
    if (a.fi - a.se > b.fi - b.se)
        return 1;

    return 0;
}
bool compare2(pii a, pii b)
{
    if (a.fi - a.se > b.fi - b.se)
        return 0;
    return 1;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vl a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i].fi = a[i];
        v[i].se = b[i];
    }
    sort(all(v), compare);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < k)
            ans += v[i].fi;
        else
            ans += max(v[i].se, v[i].fi);
    }
    sort(all(v), compare2);
    for (int i = 0; i < n; i++)
    {
        if (i < k)
            ans -= v[i].fi;
        else
            ans -= min(v[i].se, v[i].fi);
    }
    cout << abs(ans) << '\n';
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