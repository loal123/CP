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
    ll n, k;
    cin >> n >> k;
    bool curr = false;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (k <= n)
    {
        ll maxi = 0;
        int i = 0, j = 0;
        ll curr = 0;
        for (j; j < k; j++)
        {
            curr += v[j];
        }
        maxi = max(maxi, curr);
        while (j < n)
        {
            curr -= v[i++];
            curr += v[j++];
            maxi = max(maxi, curr);
        }
        cout << (ll)maxi + ((ll)k * (k - 1) / 2);
    }
    else
    {
        ll l = k - n + 1;

        ll ans = 0;

        for (auto i : v)
            ans += i;

        ans += k - n;
        ans += (n - 1) * (2 * l + n - 2) / 2;
        cout << ans;
    }
    cout << '\n';
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