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
ll check3(ll x)
{
    ll l = 2, r = 2e6 - 10000;
    while (r - l > 1)
    {
        ll mid = (l + r) / 2;
        if ((ll)mid * mid * mid == x)
            return mid;
        if ((ll)mid * mid * mid > x)
            r = mid - 1;
        else
            l = mid;
    }
    if (l * l * l == x)
        return l;
    if (r * r * r == x)
        return r;
    return -1;
}

void solve()
{
    map<ll, ll> div;
    int n;
    cin >> n;
    ll ans = 1;
    map<ll, ll> four;
    ll excess = 1;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v[i] = x;

        ll s = sqrt(x);
        if (s * s == x)
        {
            ll z = sqrt(s);
            if (z * z == s)
            {
                div[z] += 4;
            }
            else
                div[s] += 2;
        }
        else
        {
            ll xd = check3(x);
            if (xd != -1)
                div[xd] += 3;
            else
                four[x]++;
        }
    }
    ll curr = 0;
    for (auto i : four)
    {
        bool has = 0;
        for (int j = 0; j < n; j++)
        {
            if (i.fi == v[j])
                continue;

            ll yeah = gcd(i.fi, v[j]);

            if (yeah > 1)
            {
                div[yeah] += i.se;
                div[i.fi / yeah] += i.se;
                has = 1;
                break;
            }
        }
        if (!has)
        {
            div[curr--] += i.se;
            div[curr--] += i.se;
        }
    }
    for (auto i : div)
    {
        ans *= (i.se + 1);
        ans %= mod;
    }

    cout << (ans) % mod << '\n';
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