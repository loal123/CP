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
    int n;
    cin >> n;
    vl a(n);
    vl b(n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    ll passed[n + 1];
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] >= a[i - 1])
        {
            ans += a[i] - a[i - 1] + 1;
            passed[i] = a[i] - a[i - 1] + 1;
            a[i] = a[i - 1] - 1;
        }
        else
        {
            a[i - 1] = max(a[i], a[i - 1] - passed);
        }
    }

    cout << max(0LL, a[0] - ans) + ans << '\n';
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