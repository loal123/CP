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
    ll n, x;
    cin >> n >> x;
    vl v(n);
    ll cnt = 0;
    ll l = INF, r = -1;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % x)
        {
            l = min(l, i);
            r = max(r, i);
        }

        cnt += v[i];
    }
    if (cnt % x)
    {
        cout << n << '\n';
        return;
    }
    if (l == INF)
    {
        cout << -1 << '\n';
        return;
    }
    cout << max(n - l - 1, r) << '\n';
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