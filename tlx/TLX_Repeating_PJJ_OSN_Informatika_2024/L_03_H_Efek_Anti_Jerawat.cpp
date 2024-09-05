// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // typedef long double ld;
// // #define pii pair<int, int>
// // #define pll pair<ll, ll>
// // #define vi vector<int>
// // #define vl vector<ll>
// // #define fi first
// // #define se second
// // #define pb push_back
// // #define mp make_pair
// // #define all(v) v.begin(), v.end()
// // #define SZ(x) ((int)((x).size()))
// // #define pow2(x) ((ll)(x) * (x))
// // const ll mod = 998244353LL;
// // const int INF = 1e9 + 5; //
// // const ll INFF = 1e18 + 5;
// // // Super is the cutest girl
// // void solve()
// // {
// //     int n;
// //     cin >> n;
// //     vl v(n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> v[i];
// //     }
// //     int sz = (1LL << n);
// //     ll ans = 0;
// //     for (int i = 1; i < sz; i++)
// //     {
// //         ll yeah = i;
// //         ll firstcurr = 0;
// //         ll secondcurr = 0;
// //         for (int j = 0; j < n; j++)
// //         {
// //             ll xd = (1LL << j);
// //             if (yeah & xd)
// //             {
// //                 firstcurr = max(firstcurr, v[j]);
// //             }
// //         }

// //         for (int j = 1; j <= n; j++)
// //         {
// //             ll xd = (1LL << (j));
// //             int idk = j - 1;
// //             if (yeah & xd)
// //             {
// //                 for (int k = j + j; k < n; k += j)
// //                 {
// //                     if (!(yeah & (1LL << (k - 1))))
// //                     {
// //                         yeah |= xd;
// //                         secondcurr = max(secondcurr, v[k]);
// //                     }
// //                 }
// //             }
// //         }
// //         ans += max(firstcurr, secondcurr);
// //         ans %= mod;
// //     }
// //     cout << ans << '\n';
// // }
// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(0);
// //     // freopen("input.txt","r",stdin);
// //     // freopen("output.txt","w",stdout);
// //     // int t; cin >> t; while(t--)
// //     solve();
// // }
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
// const ll mod = 998244353LL;
// const int INF = 1e9 + 5; //
// const ll INFF = 1e18 + 5;
// // Super is the cutest girl
// ll binpow(ll a, ll b)
// {
//     ll res = 1;
//     while (b)
//     {
//         if (b & 1)
//             res = res * a % mod;
//         a = a * a % mod;
//         b >>= 1;
//     }
//     return res;
// }
// void solve()
// {
//     ll n;
//     cin >> n;
//     vl v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     cout << ((binpow(2, n) - 1) + mod) % mod * v[0] % mod;
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
const ll mod = 998244353LL;
const int INF = 1e9 + 5; //
const ll INFF = 1e18 + 5;
// Super is the cutest girl
ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
void solve()
{
    int n;
    cin >> n;
    vl v(n + 1);
    ll ans = 0;
    int pos;
    priority_queue<pll> pq;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pq.push({v[i], i});
    }

    ll inv = binpow(2, mod - 2);
    ll curr = binpow(2, (n));
    unordered_set<int> s;

    while (!pq.empty())
    {
        int pos = pq.top().se;
        ll val = pq.top().fi;
        vi div;
        for (ll i = 1; i * i <= pos; i++)
        {
            if (pos % i == 0)
            {
                div.pb(i);
                if (pos / i != i)
                    div.pb(pos / i);
            }
        }
        for (auto i : div)
        {
            if (!s.count(i))
            {
                s.insert(i);
                curr *= inv;
                curr %= mod;

                ans %= mod;
                ans += val * curr;
            }
        }

        ans %= mod;
        pq.pop();
    }
    cout << ans << '\n';
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