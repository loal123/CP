#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
void solve()
{
    ll ans = 0;
    ll curr = 0;

    ll n, x;
    cin >> n >> x;
    vl v(n);
    vi cnt(n);
    for (ll &i : v)
        cin >> i;

    reverse(all(v));
    vl pref(n + 1);
    pref[0] = 0;
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] > x)
            continue;
        ll xd = lower_bound(all(pref), pref[i] + x) - pref.begin();
        if (xd == n + 1)
            xd--;
        if (pref[xd] > pref[i] + x)
            xd--;
        ans += xd - i;
        ll another = upper_bound(all(pref), pref[i + 1] + x) - pref.begin();
        ans += n + 1 - another;
    }
    cout << ans << '\n';
    // 1 2 3 2 5 4 7 4 9 6
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}