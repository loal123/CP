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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    ll n, p, l, t;
    cin >> n >> p >> l >> t;
    ll counts = ((n - 1) / 7 + 1);

    ll total = 0;
    if ((counts * t) + (counts + 1) / 2 * l < p)
    {
        p -= (counts * t);
        p -= (counts + 1) / 2 * l;
        total += (counts + 1) / 2;

        cout << n - (total + ((p + l - 1)) / l) << endl;
    }
    else
    {
        ll mini = 1e18;
        ll a = 0;
        ll b = n;
        while (a != b)
        {
            ll mid = (a + b) / 2;
            if ((mid * t) + (mid + 1) / 2 * l == p)
            {
                mini = min(mid, mini);
                break;
            }
            else if ((mid * t) + (mid + 1) / 2 * l > p)
                b = mid - 1;
            else
                a = mid + 1;
        }
        cout << n - a << endl;
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