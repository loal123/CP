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
    ll m, k, a, b;
    cin >> m >> k >> a >> b;
    ll ans = 0;
    ll kneed = m / k;
    ll oneneed = m % k;
    kneed -= b;

    if (a >= m)
    {
        cout << 0 << '\n';
        return;
    }
    ll allone = m - a;
    ll withk = m / k;
    if (a >= m % k)
    {
        cout << min(allone, withk) << '\n';
    }
    else
    {
        cout << min(allone, withk + m % k) << '\n';
    }
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