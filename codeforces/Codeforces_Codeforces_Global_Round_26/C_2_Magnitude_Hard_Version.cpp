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
const ll mod = 998244353;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
long long binpow(long long a, long long b)
{
    a %= mod;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
void solve()
{
    int n;
    cin >> n;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = 0;

    ll ans2 = 0;
    ll pos = 1;
    ll neg = 1;
    for (int i = 0; i < n; i++)
    {
        ans += v[i];
        if (v[i] >= 0)
            pos = (pos * 2) % mod;
    }
    ans = abs(ans);
    for (int i = 0; i < n; i++)
    {
        ans2 = abs(ans2 + v[i]);
    }

    ll suff[n + 1];

    suff[n] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + v[i];
    }

    ll maxi = -1;

    ll curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += v[i];

        maxi = max(maxi, abs(abs(curr) + suff[i + 1]));
    }

    ll k = (max({
        ans,
        ans2,
        maxi,
    }));
    ll realans = 0;

    curr = 0;
    vi position;
    for (int i = 0; i < n; i++)
    {
        curr += v[i];

        ll idk = abs(curr) + suff[i + 1];

        if (k == idk)
        {
            position.pb(i);
        }
    }
    bool can = false;
    if (SZ(position) == 0)
    {
        cout << binpow(2, n) % mod << endl;
        return;
    }
    ll pref[n + 1];
    pref[0] = 1;

    ll prefcurr = 0;
    for (int i = 0; i < n; i++)
    {
        prefcurr += v[i];

        if (prefcurr >= 0)
            pref[i + 1] = (pref[i] * 2) % mod;

        else
        {
            pref[i + 1] = pref[i];
            can = 1;
        }
    }

    for (auto i : position)
    {
        realans = (ll)realans + (ll)pref[i + 1] * binpow(2, (n - i - 1));
        realans %= mod;
    }

    if (!can)
    {
        cout << binpow(2, n);
    }
    else
        cout << realans;

    cout << endl;
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