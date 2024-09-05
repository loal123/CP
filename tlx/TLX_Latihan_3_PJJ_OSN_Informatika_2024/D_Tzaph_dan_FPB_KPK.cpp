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
ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
void solve()
{
    ll f, k;
    cin >> f >> k;
    if (k % f != 0)
    {
        cout << "-1 -1" << '\n';
        return;
    }
    k /= f;

    map<ll, int> m;
    ll temp = k;
    for (ll i = 2; (ll)i * i <= k; i++)
    {
        while (temp % i == 0)
        {
            m[i]++;
            temp /= i;
        }
    }
    if (temp > 1)
        m[temp]++;
    vl curr;
    for (auto i : m)
    {
        curr.pb(binpow(i.fi, i.se));
    }
    sort(all(curr));
    pll minans = {INFF, INFF};
    int sz = SZ(curr);
    for (int i = 0; i < (1 << sz); i++)
    {
        ll curr1 = f, curr2 = f;
        for (int j = 0; j < sz; j++)
        {
            if (i & (1 << j))
            {
                curr1 *= curr[j];
            }
            else
                curr2 *= curr[j];
        }
        if (curr1 + curr2 < minans.fi + minans.se)
        {
            minans = {curr1, curr2};
        }
    }
    cout << minans.fi << ' ' << minans.se;
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