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
const int maxn = 2e5 + 5;
ll countz[maxn];
void pre()
{
    ll counts = 1;
    countz[1] = 1;
    for (int i = 2; i < maxn; i++)
    {
        int real = i;
        while (real > 0)
        {
            counts += real % 10;
            real /= 10;
        }
        countz[i] = counts;
    }
}
void solve()
{
    ll n;
    cin >> n;
    cout << countz[n] << '\n';
    // ll x;
    // cin >> x; // 1 *   45 + ((3 * ((3 + 4))))
    // cout << (ll)(x / 9) * 45 + ((x % 9 * ((x % 9 + 1))) / 2);
    // cout << endl;

    // if (n >= 9)
    // {
    //     counts += 45;
    //     n -= 9;

    //     ll yeah = n / 10; // 0
    //     ll sob = n % 10;  // 0
    //     counts += (ll)(yeah * (55 + (55 + (10 * (yeah - 1))))) / 2;

    //     for (int i = yeah + 1; i < yeah + 1 + sob; i++)
    //     {
    //         counts += i;
    //     }
    //     cout << counts << endl;
    // }
    // else
    // {
    //     cout << (n * (n + 1)) / 2 << endl;
    // }

    // for (int i = 0; i < n / 10; i++)
    // {
    //     counts += 45 + (10 * i);
    // }
    // cout << counts << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    pre();
    int t;

    cin >> t;
    while (t--)
        solve();
}