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
const int maxbit = 60;
// Super is the cutest girl
bool get_bit(ll x, int i)
{
    return x & (1ll << i);
}
void solve()
{
    ll a, b, r;
    cin >> a >> b >> r;

    ll x = 0;

    bool first_bit = true;
    if (a > b)
        swap(a, b);

    for (int i = maxbit; i >= 0; i--)
    {
        bool bita = get_bit(a, i);
        bool bitb = get_bit(b, i);

        if (bita != bitb)
        {
            if (first_bit)
                first_bit = false;

            else
            {
                if (!bita && x + (1ll << i) <= r)
                {
                    x += 1ll << i;
                    a ^= 1ll << i;
                    b ^= 1ll << i;
                }
            }
        }
    }

    cout << abs(b - a) << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}