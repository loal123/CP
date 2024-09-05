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
    ll n, a, b;
    cin >> n >> a >> b;

    ll curr = 0;
    ll ans = INFF;
    vl v(n + 1, 0);
    ll curr2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        curr += v[i] * b;
    }
    ans = min(ans, curr);
    for (int i = 1; i <= n; i++)
    {
        curr2 += (ll)a * (v[i] - v[i - 1]);
        curr -= (ll)b * (v[i] - v[i - 1]) * (n - i);
        ans = min(ans, curr + curr2);
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