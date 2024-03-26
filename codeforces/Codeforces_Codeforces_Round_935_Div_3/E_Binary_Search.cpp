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
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    int pos;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == x)
            pos = i;
    }

    int l = 1, r = n + 1;
    while (r - l > 1)
    {
        int m = (l + r) / 2;
        if (a[m] <= x)
            l = m;
        else
            r = m;
    }
    if (l == pos)
        cout << 0;
    else
    {

        cout << 1 << "\n"
             << l << " " << pos;
    }
    cout << '\n';
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
// void solve()
// {
//     int n, x;
//     cin >> n >> x;
//     int a[n + 1];
//     int pos;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//         if (a[i] == x)
//             pos = i;
//     }

//     int l = 1, r = n + 1;
//     vector<pair<int, bool>> v;
//     while (r - l > 1)
//     {
//         int m = (r + l) / 2;
//         if (m <= pos)
//         {
//             if (m > pos)
//             {
//                 v.pb({m, 0});
//                 r = m;
//             }
//             else
//             {
//                 v.pb({m, 1});
//                 l = m;
//             }
//         }
//         else
//         {
//             v.pb({m, 0});
//             r = m;
//         }
//     }
//     vi contraleft, contraright; // for i  in v if contradicting please push back
//     for (auto i : v)
//     {
//         if (i.se)
//         {
//             if (a[i.fi] > x)
//                 contraleft.pb(i.fi); // supposed to go right but is higher
//         }
//         else
//         {
//             if (a[i.fi] <= x)
//                 contraright.pb(i.fi); // supposed to go left but is less than equals to
//         }
//     }
//     vector<pii> ans;
//     int needed = 0;
//     if (contraleft.size() == 2 && contraright.size() == 2)
//     {
//         ans.pb({contraleft[0], contraright[0]});
//         ans.pb({contraleft[1], contraright[1]});
//     }
//     else if (contraleft.size() >= 1 && contraright.size() >= 1)
//     {
//         ans.pb({contraleft[0], contraright[0]});
//         if (contraleft.size() > 1)
//         {
//             for (int i = 1; i <= n; i++)
//             {
//                 int bruh = contraleft[1];
//                 if (bruh != a[i] && a[i] != ans[0].fi && a[i] != ans[0].se && a[i] < x)
//                 {
//                     ans.pb({bruh, i});
//                     break;
//                 }
//             }
//         }
//         else if (contraright.size() > 1)
//         {
//             for (int i = 1; i <= n; i++)
//             {
//                 int bruh = contraright[1];
//                 if (bruh != a[i] && a[i] != ans[0].fi && a[i] != ans[0].se && a[i] > x)
//                 {
//                     ans.pb({bruh, i});
//                     break;
//                 }
//             }
//         }
//     }
//     else
//     {
//         if (contraleft.size() == 1)
//         {
//             for (int i = 1; i <= n; i++)
//             {
//                 int bruh = contraleft[0];
//                 if (bruh != a[i] && a[i] < x)
//                 {
//                     ans.pb({bruh, i});
//                     break;
//                 }
//             }
//         }
//         else if (contraright.size() == 1)
//         {
//             for (int i = 1; i <= n; i++)
//             {
//                 int bruh = contraright[0];
//                 if (bruh != a[i] && a[i] > x)
//                 {
//                     ans.pb({bruh, i});
//                     break;
//                 }
//             }
//         }
//     }
//     cout << ans.size() << '\n';
//     if (ans.size() != 0)
//     {
//         for (auto i : ans)
//             cout << i.fi << " " << i.se << "\n";
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
// }