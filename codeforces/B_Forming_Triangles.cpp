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
ll choose(ll n, ll r)
{
    ll result = 1;
    ll i;
    for (i = 0; i < r; i++)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

void solve()
{
    ll n;
    cin >> n;
    vi a(n);
    ll num[n + 1];
    memset(num, 0, sizeof(num));
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        num[a[i]]++;
    }
    sort(all(a));
    vi pref;
    for (ll i = 0; i < n - 1; i++)
    {
        pref.pb(a[i] + a[i + 1]);
    }

    ll ans = 0;
    ll curr = 0;
    for (ll i = 0; i <= n; i++)
    {
        ans += num[i] * (num[i] - 1) * (num[i] - 2) / 6;
        ans += num[i] * (num[i] - 1) / 2 * curr;
        curr += num[i];
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