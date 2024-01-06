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
const int maxn = 1e6 + 5;
// Super is a cute girl
// int idk(int x)
// {
//     int result = x;
//     for (int i = 2; i * i <= x; i++)
//     {
//         if (x % i == 0)
//         {
//             while (x % i == 0)
//                 x /= i;

//             result -= result / i;
//         }
//     }
//     if (x > 1)
//         result -= result / x;

//     return result;
// }

vi phi(maxn);

void precompute(int n)
{
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++)
    {
        if (phi[i] == i)
        {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    // cout << idk(n) << '\n';
    precompute(maxn);
    cout << phi[n] << '\n';
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