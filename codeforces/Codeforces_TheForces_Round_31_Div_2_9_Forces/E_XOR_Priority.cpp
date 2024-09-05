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
const int maxn = 5e5 + 5;
ll p2[maxn];
#define int ll
void solve()
{
    int n;
    cin >> n;
    ll ans = 0;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // if (i == 0 || i == n - 1)
        //     ans += v[i] * p2[n - 2] - v[i];
        // else
        //     ans += v[i] * p2[n - 3] - v[i];

        // ans %= mod;
    }

    // multiplier
    int mul = 1;

    for (int i = 0; i <= 31; i++)
    {

        // variable to store number of
        // sub-arrays with odd number of elements
        // with ith bits starting from the first
        // element to the end of the array
        int c_odd = 0;

        // variable to check the status
        // of the odd-even count while
        // calculating c_odd
        bool odd = 0;

        // loop to calculate initial
        // value of c_odd
        for (int j = 0; j < n; j++)
        {
            if ((v[j] & (1LL << i)) > 0)
                odd = (!odd);
            if (odd)
                c_odd++;
        }

        // loop to iterate through
        // all the elements of the
        // array and update ans
        for (int j = 0; j < n; j++)
        {
            ans += (mul * c_odd);

            ans %= mod;

            if ((v[j] & (1LL << i)) > 0)
                c_odd = (n - j - c_odd);
        }

        // updating the multiplier
        mul *= 2;
        mul %= mod;
    }
    cout << ans % mod << '\n';
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    p2[0] = 1;
    for (int i = 1; i <= maxn - 3; i++)
    {
        p2[i] = p2[i - 1] * 2LL;
        p2[i] %= mod;
    }
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}