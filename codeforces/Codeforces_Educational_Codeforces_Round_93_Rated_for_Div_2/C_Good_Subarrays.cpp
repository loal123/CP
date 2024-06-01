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
#define int long long
// Super is the cutest girl
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    ll ans = 0;
    int curr = 0;
    int pref[n + 1];
    pref[0] = 0;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = s[i] - '0' + pref[i];
    }
    for (int i = 0; i <= n; i++)
    {
        m[pref[i] - (i + 1)]++;
    }

    for (auto i : m)
    {
        ans += (ll)(i.se * ((i.se) - 1)) / 2;
    }

    // 0 1 0
    // 0 0 -1 -1 -1

    cout << ans << '\n';
}
signed main()
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