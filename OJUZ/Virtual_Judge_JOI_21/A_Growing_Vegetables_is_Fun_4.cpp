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
//     int n;
//     cin >> n;
//     vl v(n);
//     ll ans = INFF;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         vl ops(n);
//         vl temps(n);
//         temps = v;
//         ll curr = 0;
//         ll prev = v[0];
//         for (int j = 1; j <= i; j++)
//         {
//             if (prev >= temps[j])
//             {
//                 ll temp = prev - temps[j] + 1;
//                 prev++;
//                 curr += temp;
//                 temps[j] += temp;
//                 ops[j] += temp;
//             }
//             else
//             {
//                 prev = temps[j];
//             }
//         }
//         prev = temps[n - 1];

//         for (int j = n - 2; j >= i; j--)
//         {
//             if (prev >= temps[j])
//             {
//                 ll temp = prev - temps[j] + 1;
//                 prev++;
//                 curr += temp;
//                 temps[j] += temp;
//                 ops[j] += temp;
//             }
//             else
//             {
//                 prev = temps[j];
//             }
//         }

//         for (auto i : ops)
//             cout << i << " ";
//         cout << '\n';
//     }
//     cout << ans << '\n';
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // int t;
//     // cin >> t;
//     // while (t--)
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
    vl v(n);
    vl b(n - 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n; i++)
    {
        b[i - 1] = v[i] - v[i - 1];
    }
    vl pref(n + 1);
    vl suff(n + 1);
    ll ans = INFF;
    for (int i = 0; i < n - 1; i++)
    {
        pref[i + 1] = pref[i] + max(0LL, 1LL - b[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + max(0LL, 1LL + b[i]);
    }
    // -11 33 52 -82 88 -63 57
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, max(pref[i], suff[i]));
        // 7 0
        // 6 1
        // 5 2
        // 4 3
        // 3 4
        // 2 5
        // 1 6
        // 0 7
    }
    cout << ans << '\n';

    // -1 0 1 2
    // 1 0 0 0
    // 0 0 1 2
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