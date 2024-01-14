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
// Super is a cute girl
void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll a[n];
    ll pref[n + 1];
    ll counts = 0;
    ll theo[n];
    ll countss = 0;
    pref[0] = countss;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        theo[i] = a[i];
    }
    sort(a, a + n);
    sort(theo, theo + n);
    for (int i = 0; i < n; i++)
    {
        countss += a[i];
        pref[i + 1] = countss;
    }
    ll maxi = -INFF;

    ll right = n - k;
    int i = 0;
    while (right <= n)
    {
        if (right >= 0)
        {
            ll real = max(right - x, 0LL);
            ll summ = pref[real];
            ll neg = abs(pref[real] - pref[real + min(x, real)]);

            maxi = max(summ - neg, maxi);
        }
        right++;
    }
    if (x == n)
    {
        maxi = -pref[x - k];
    }

    cout << maxi << endl;
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