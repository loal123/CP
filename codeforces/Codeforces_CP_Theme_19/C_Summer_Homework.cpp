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
const ll mod = 1e9;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n, m;
    cin >> n >> m;
    // brute force E1
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll fib[n + 2];
    fib[0] = fib[1] = 1LL;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        fib[i] %= mod;
    }
    while (m--)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            ll idx, val;
            cin >> idx >> val;
            v[idx - 1] = val;
        }
        if (q == 2)
        {
            ll l, r;
            cin >> l >> r;
            l--;
            r--;
            ll ans = 0;
            for (int i = l; i <= r; i++)
            {
                ans += fib[i - l] * v[i];
                ans %= mod;
            }
            cout << ans << '\n';
        }
    }
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