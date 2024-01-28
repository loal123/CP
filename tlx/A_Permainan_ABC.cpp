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
bool prime[100005];
// void SieveOfEratosthenes(int n)
// {
//

//     memset(prime, true, sizeof(prime));

//     for (int p = 2; p * p <= n; p++)
//     {
//
//         if (prime[p] == true)
//         {
//
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
// }
void solve()
{

    ll fib[50];
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i <= 49; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int n;
    cin >> n;
    bool can = false;

    for (int i = 1; i <= 49; i++)
    {
        if (n % fib[i] == 0)
        {
            cout << n / fib[i] * fib[i - 1];
            can = true;
            return;
        }
    }
    if (!can)
        cout << -1;

    // SieveOfEratosthenes(100005);
    // for (int p = 1; p < 100005; p++)
    // {
    //     if (prime[p])
    //     {
    //         bool can = false;

    //         for (int i = 1; i < p; i++)
    //         {
    //             int a = p;
    //             int bruh = i;
    //             while (bruh > 0)
    //             {
    //                 int c = a - bruh;
    //                 a = bruh;
    //                 bruh = c;
    //             }
    //             if (bruh == 0)
    //                 can = true;
    //         }
    //         if (can)
    //             cout << p << endl;
    //     }
    // }
    // 13(8) 89(55)
    // cout << n / 2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}