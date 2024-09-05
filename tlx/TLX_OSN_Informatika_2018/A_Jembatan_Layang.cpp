// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// #define vi vector<int>
// #define vl vector<ll>
// #define fi first
// #define se second
// #define pb push_back
// #define mp make_pair
// #define all(v) v.begin(), v.end()
// #define SZ(x) ((int)((x).size()))
// #define pow2(x) ((ll)(x) * (x))
// const ll mod = 1e9 + 7;
// const int INF = 1e9 + 5; // 998244353
// const ll INFF = 1e18 + 5;
// // Super is the cutest girl
// void solve()
// {

//     string s;
//     cin >> s;
//     // if (s[1] == '1')
//     // {
//     //     cout << 20 << '\n';
//     //     return;
//     // }
//     // if (s[2] == '2')
//     // {
//     //     cout << 6 << '\n';
//     //     return;
//     // }
//     int n, k;
//     vl fac(100005);
//     fac[0] = 1;
//     for (int i = 1; i <= 100001; i++)
//     {
//         fac[i] = 1LL * fac[i - 1] * i;
//         fac[i] %= mod;
//     }

//     cin >> n >> k;
//     vi br(k);
//     for (int i = 0; i < k; i++)
//     {
//         cin >> br[i];
//         br[i]--;
//     }
//     vector<pii> left(k), right(k);
//     vi a(n), b(n);
//     vector<pair<bool, bool>> have(k);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         a[i]--;
//         if (i > br[a[i]])
//             left[a[i]].fi++;
//         else if (i < br[a[i]])
//             left[a[i]].se++;
//         else
//             have[a[i]].fi = 1;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//         b[i]--;
//         if (i > br[b[i]])
//             right[b[i]].fi++;
//         else if (i < br[b[i]])
//             right[b[i]].se++;
//         else
//             have[b[i]].se = 1;
//     }
//     ll ans = 1;
//     for (int i = 0; i < k; i++)
//     {
//         if (have[i].se & have[i].fi)
//         {
//             if (left[i].fi + left[i].se != right[i].fi + right[i].se)
//             {
//                 cout << 0 << '\n';
//                 return;
//             }

//             if (abs(right[i].se - left[i].fi) <= 1 && abs(left[i].se - right[i].fi) <= 1)
//             {
//                 ll yeah = right[i].se + right[i].fi + 1;
//                 if (yeah % 2 == 0)
//                 {
//                     ans *= fac[right[i].se];
//                     ans %= mod;
//                     ans *= fac[right[i].fi];
//                     ans %= mod;
//                     ans *= yeah / 2;
//                     ans %= mod;
//                 }
//                 else
//                 {
//                     ans *= fac[right[i].se];
//                     ans %= mod;
//                     ans *= fac[right[i].fi];
//                     ans %= mod;
//                     ans *= yeah;
//                     ans %= mod;
//                 }
//             }
//             else
//             {
//                 cout << 0 << '\n';
//                 return;
//             }
//             continue;
//         }
//         else if (have[i].fi)
//         {
//             if (left[i].fi + 1 == right[i].se && right[i].fi == left[i].se)
//             {
//                 ans *= fac[left[i].fi + 1];
//                 ans %= mod;
//                 ans *= fac[left[i].se];
//                 ans %= mod;
//             }
//             else if (left[i].fi == right[i].se && right[i].fi == left[i].se + 1)
//             {
//                 ans *= fac[left[i].se + 1];
//                 ans %= mod;
//                 ans *= fac[left[i].fi];
//                 ans %= mod;
//             }
//             else
//             {
//                 cout << 0 << '\n';
//                 return;
//             }
//         }
//         else if (have[i].se)
//         {
//             if (left[i].fi == right[i].se + 1 && right[i].fi == left[i].se)
//             {
//                 ans *= fac[right[i].se + 1];
//                 ans %= mod;
//                 ans *= fac[right[i].fi];
//                 ans %= mod;
//             }
//             else if (left[i].fi == right[i].se && right[i].fi + 1 == left[i].se)
//             {
//                 ans *= fac[left[i].se];
//                 ans %= mod;
//                 ans *= fac[left[i].fi];
//                 ans %= mod;
//             }
//             else
//             {
//                 cout << 0 << '\n';
//                 return;
//             }
//         }
//         else
//         {
//             if (left[i].fi != right[i].se || left[i].se != right[i].fi)
//             {
//                 cout << 0 << '\n';
//                 return;
//             }
//             ans *= fac[left[i].fi];
//             ans %= mod;
//             ans *= fac[left[i].se];
//             ans %= mod;
//         }
//         // if (have[i].fi | have[i].se)
//         // {
//         //     ans *= (fac[left[i].fi] + fac[left[i].se] + 1);
//         //     ans %= mod;
//         // }
//     }
//     // if both are connected to a same level bridge, then if total is even: (n / 2 - 1)! * (n / 2)! * (n / 2)!
//     // if none are connected, straightforward
//     // if only one of them is actually connected, refer to last

//     cout << ans << '\n';
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // int t; cin >> t; while(t--)
//     solve();
// }

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
    int bridge;
    cin >> bridge;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i;
    }
    int ans = 0;
    do
    {
        bool can = true;
        for (int i = 0; i < n; i++)
        {
            if (i == bridge)
                continue;
            if (v[i] == bridge)
                continue;
            if (i < bridge)
            {
                if (v[i] < bridge)
                    can = 0;
            }
            else if (v[i] > bridge)
                can = 0;
        }
        ans += can;
    } while (next_permutation(all(v)));

    cout << ans;
    // 1/5  1/2
    // 6 720 144 72 72 144 720
    // 1/6 2/5 3/4
    // 7 5040 840 336 252 336 840 5040
    // 1/7 2/6
    // 8 40320 5760 1920 1152
    // 9 362880 45360 12960 6580
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