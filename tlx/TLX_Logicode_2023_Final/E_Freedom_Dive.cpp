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
map<ll, ll> m;
void div(ll x)
{
    for (ll i = 1; (ll)i * i <= x; i++)
    {
        if (x % i == 0)
        {
            m[i]++;
            if (i != x / i)
                m[x / i]++;
        }
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    ll pref[n + 1];
    ll suff[n + 1];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (k == 2 || n < 2000)
            div(a[i]);
    }
    if (k == 1 && n >= 2000)
    {
        pref[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            pref[i] = gcd(a[i], pref[i - 1]);
        }
        suff[n - 1] = a[n - 1];
        for (ll i = n - 2; i >= 0; i--)
        {
            suff[i] = gcd(a[i], suff[i + 1]);
        }

        ll maxi = suff[1];
        for (ll i = 1; i < n - 1; i++)
        {
            maxi = max(gcd(suff[i + 1], pref[i - 1]), maxi);
        }
        maxi = max(maxi, pref[n - 1]);
        cout << maxi << '\n';
        return;
    }

    ll ans = -1;
    for (auto i : m)
    {
        if (i.se + k >= n)
            ans = max(ans, i.fi);
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