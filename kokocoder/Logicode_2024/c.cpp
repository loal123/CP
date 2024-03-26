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
const ll mod = 998244353;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
ll powermod(ll a, ll b)
{
    ll res = 1;

    a %= mod;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b >>= 1;
    }
    res %= mod;
    return res;
}
void solve()
{
    int n;
    cin >> n;
    ll a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll bruh = 1 << n;
    ll ans = 0;
    for (int i = 1; i <= bruh - 1; i++)
    {
        ll curr = 1;
        for (int j = 0; j < n; j++)
        {

            if (((1 << j) & i))
            {
                curr = (ll)curr * powermod(a[j], b[j]);
                curr %= mod;
                curr = (ll)curr * b[j];
                curr %= mod;
            }
        }
        ans += curr;
    }
    cout << ans;
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
// const ll mod = 998244353;
// const int INF = 1e9 + 5;
// const ll INFF = 1e18 + 5;
// // Super is the cutest girl
// void solve()
// {
//     ll n;
//     cin >> n;
//     ll x = 1;
//     for (int i = 0; i < n; i++)
//     {
//         x = (ll)x * 2;
//         x %= mod;
//     }
//     cout << (x - 1 + mod) % mod;
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