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
    string s;
    cin >> n >> s;
    vector<pll> v;
    ll ans = 0;
    for (ll i = 0; i < n / 2; i++)
    {
        if (s[i] == 'L')
        {
            v.pb({i, 0});
            ans += i;
        }
        else
            ans += n - 1 - i;
    }
    for (ll i = n / 2; i < n; i++)
    {
        if (s[i] == 'R')
        {
            v.pb({n - 1 - i, 1});
            ans += n - 1 - i;
        }
        else
            ans += i;
    }
    sort(all(v));
    ll j = 1;
    for (auto i : v)
    {
        if (j > n)
        {
            break;
        }
        else
        {
            if (i.se == 0)
            {
                ans += n - 1 - i.fi - i.fi;
            }
            else
            {
                ans += (n - i.fi - 1) - (n - 1 - (n - i.fi - 1));
            }
        }
        j++;
        cout << ans << ' ';
    }
    for (ll i = j; i <= n; i++)
    {
        cout << ans << ' ';
    }

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