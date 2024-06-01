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
// Super is the cutest girl
struct par
{
    ll a, b, c;
};
ll calc(ll a, ll b, ll c)
{
    return (ll)pow2(b) - 4 * (a * c);
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vl k(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    sort(all(k));

    vector<par> asteroid(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> asteroid[i].a >> asteroid[i].b >> asteroid[i].c;
    }
    for (ll i = 0; i < m; i++)
    {
        ll A = asteroid[i].a;
        ll B = asteroid[i].b;
        ll C = asteroid[i].c;
        ll x = lower_bound(all(k), B) - k.begin();
        bool can = false;
        for (int i = max(0LL, x - 50); i < min(n, x + 50); i++)
        {
            if (calc(A, B - k[i], C) < 0)
            {
                cout << "YES\n"
                     << k[i] << '\n';
                can = true;
                break;
            }
        }
        if (!can)
            cout << "NO\n";
    }
}

//     {
//         if (calc(asteroid[i].a, asteroid[i].b - k[idx - 1], asteroid[i].c) < 0)
//         {
//             cout << "YES\n";
//             cout << k[idx - 1] << '\n';
//         }
//         else
//             cout << "NO\n";
//         continue;
//     }
//     if (idx >= 1)
//     {
//         ll xd = asteroid[i].b;

//         if (calc(asteroid[i].a, asteroid[i].b - k[idx - 1], asteroid[i].c) < 0)
//         {
//             cout << "YES\n";
//             cout << k[idx - 1] << '\n';
//             continue;
//         }
//     }
//     if (idx < n - 1)
//     {
//         if (calc(asteroid[i].a, asteroid[i].b - k[idx + 1], asteroid[i].c) < 0)
//         {
//             cout << "YES\n";
//             cout << k[idx + 1] << '\n';
//             continue;
//         }
//     }
//     if (calc(asteroid[i].a, asteroid[i].b - k[idx], asteroid[i].c) < 0)
//     {
//         cout << "YES\n";
//         cout << k[idx] << '\n';
//     }
//     else
//         cout << "NO\n";
// }
// now for each asteroid, binary search (ternary search possibly) so that b is as close possible to k[i] .

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