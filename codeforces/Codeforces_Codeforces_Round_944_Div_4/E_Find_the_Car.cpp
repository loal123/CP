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
    ll n, k, q;
    cin >> n >> k >> q;

    vl a(k + 1), b(k + 1);
    a[0] = 0;
    b[0] = 0;
    for (ll i = 1; i <= k; i++)
        cin >> a[i];

    for (ll i = 1; i <= k; i++)
        cin >> b[i];

    while (q--)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            cout << 0 << " ";
            continue;
        }
        ll pos = lower_bound(all(a), x) - a.begin();

        ll dist = a[pos] - a[pos - 1];
        ll time = b[pos] - b[pos - 1];
        ll actualdist = x - a[pos - 1];

        cout << ll(b[pos - 1] + ((ll)(actualdist * time) / dist)) << " ";
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