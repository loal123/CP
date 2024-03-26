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
// const int INF = 1e9 + 5;
// const ll INFF = 1e18 + 5;
// // Super is the cutest girl
// const int maxn = 1e5 + 5;
// ll t[4 * maxn];
// void build(ll a[], ll v, ll tl, ll tr)
// {
//     if (tl == tr)
//     {
//         t[v] = a[tl];
//     }
//     else
//     {
//         ll tm = (tl + tr) / 2;
//         build(a, v * 2, tl, tm);
//         build(a, v * 2 + 1, tm + 1, tr);
//         t[v] = 0;
//     }
// }

// void update(ll v, ll tl, ll tr, ll l, ll r, ll add)
// {
//     if (l > r)
//         return;
//     if (l == tl && r == tr)
//     {
//         t[v] += add;
//     }
//     else
//     {
//         ll tm = (tl + tr) / 2;
//         update(v * 2, tl, tm, l, min(r, tm), add);
//         update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, add);
//     }
// }

// ll GET(ll v, ll tl, ll tr, ll pos)
// {
//     if (tl == tr)
//         return t[v];
//     ll tm = (tl + tr) / 2;
//     if (pos <= tm)
//         return t[v] + GET(v * 2, tl, tm, pos);
//     else
//         return t[v] + GET(v * 2 + 1, tm + 1, tr, pos);
// }
// void solve()
// {
//     ll n, q;
//     cin >> n >> q;
//     ll a[n + 3];
//     for (ll i = 0; i < n; i++)
//     {
//         a[i] = 0;
//     }
//     build(a, 1, 0, n - 1);
//     while (q--)
//     {
//         ll d;
//         cin >> d;
//         if (d == 1)
//         {
//             ll idx;
//             ll v;
//             cin >> idx >> v;
//             update(1, 0, n - 1, idx - 1, n - 1, v);
//         }
//         else
//         {
//             ll x;
//             cin >> x;
//             ll left = 0;
//             ll right = n - 1;
//             ll mini = n;
//             while (left < right)
//             {
//                 ll mid = (left + right) / 2;
//                 ll yeah = GET(1, 0, n - 1, mid);
//                 if (yeah >= x)
//                 {
//                     mini = min(mini, mid);
//                     right = mid - 1;
//                 }
//                 else
//                     left = mid + 1;
//             }
//             if (GET(1, 0, n - 1, mini) >= x)
//                 cout << mini + 1;
//             else
//                 cout << -1;

//             cout << '\n';
//         }
//     }
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
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    ll n, q;
    cin >> n >> q;
    vl v(n + 5, 0);
    while (q--)
    {
        int d;
        cin >> d;
        if (d == 1)
        {
            ll idx, val;
            cin >> idx >> val;
            for (int i = idx - 1; i < n; i++)
            {
                v[i] += val;
            }
        }
        else
        {
            ll x;
            cin >> x;
            ll pos = -1;
            for (int i = 0; i < n; i++)
            {
                if (v[i] >= x)
                {
                    pos = i + 1;
                    break;
                }
            }
            cout << pos << '\n';
        }
    }
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