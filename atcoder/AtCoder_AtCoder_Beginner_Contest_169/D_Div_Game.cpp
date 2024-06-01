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
    ll n;
    cin >> n;
    map<ll, ll> m;
    for (ll i = 2; (ll)i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                m[i]++;
            }
        }
    }
    if (n > 1)
        m[n]++;
    vl v;
    for (auto i : m)
    {
        v.pb(i.se);
    }
    int sz = SZ(v);
    int curr = 0;

    int ans = 0;

    for (auto i : v)
    {
        for (int j = 1; j <= 60; j++)
        {
            if (i - j < 0)
                break;

            i -= j;
            ans++;
        }
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