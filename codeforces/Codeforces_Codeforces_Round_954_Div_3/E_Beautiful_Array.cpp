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
    ll n, k;
    cin >> n >> k;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    map<ll, vl> m;
    int odd = 0;
    ll ans = 0;
    for (auto i : v)
    {
        m[i % k].pb(i);
    }
    for (auto i : m)
    {
        if (i.se.size() % 2 == 1)
            odd++;
    }
    if (odd > 1)
    {
        cout << -1 << '\n';
        return;
    }
    for (auto i : m)
    {
        int sz = SZ(i.se);
        if (sz % 2 == 0)
        {
            for (int j = 0; j < sz - 1; j += 2)
            {
                ans += (i.se[j + 1] - i.se[j]) / k;
            }
        }
        else
        {
            if (sz == 1)
                continue;

            ll curr = 0;

            vl stuff;
            ll pref = 0;
            vl suff;

            suff.pb(0);

            for (int j = sz - 1; j > 0; j -= 2)
            {
                suff.pb(suff.back() + (i.se[j] - i.se[j - 1]) / k);
            }
            int j = 0;
            int ridk = SZ(suff) - 2;
            ll mini = suff[SZ(suff) - 1];
            while (j < sz - 1 && ridk >= 0)
            {
                pref += (i.se[j + 1] - i.se[j]) / k;
                mini = min(mini, pref + suff[ridk]);
                j += 2;
                ridk--;
            }

            ans += mini;
        }
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