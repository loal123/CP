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
    ll xd = 0;
    ll xd2 = 0;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i & 1)
            xd = __gcd(xd, v[i]);

        else
            xd2 = __gcd(xd2, v[i]);
    }
    bool can = false;
    ll amount;
    if (xd > 1)
    {
        bool cann = true;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[i] % xd == 0)
                {
                    cann = false;
                    break;
                }
            }
        }
        if (cann)
        {
            can = true;
            amount = xd;
        }
    }
    if (xd2 > 1)
    {
        bool cann = true;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {

                if (v[i] % xd2 == 0)
                {
                    cann = 0;
                    break;
                }
            }
        }
        if (cann)
        {
            can = 1;
            amount = xd2;
        }
    }

    if (can)
    {
        cout << amount << endl;
    }
    else
        cout << 0 << endl;
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