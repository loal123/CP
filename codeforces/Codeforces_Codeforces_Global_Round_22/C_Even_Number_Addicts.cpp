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
    int n;
    cin >> n;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
    if (odd == 0)
    {
        cout << "Alice\n";
    }
    else if (even == 0)
    {
        if (((odd + 1) / 2) % 2 == 0)
        {
            cout << "Alice\n";
        }
        else
            cout << "Bob\n";
    }
    else
        cout << "Bob\n";
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
// // state
// // 1 1 win
// // 2 1 lose
// // 3 1  win 2 1 2 0

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
// set<pii> s;
// set<pii> s2;
// void ser(int x, int y, bool alice, int curr, int realx, int realy)
// {
//     if (x == 0 && y == 0)
//     {
//         if (curr % 2 == 0)
//             s.insert({realx, realy});
//         else
//             s2.insert({realx, realy});
//     }
//     else
//     {
//         if (alice)
//         {
//             if (x > 0)
//                 ser(x - 1, y, false, curr + 1, realx, realy);
//             if (y > 0)
//                 ser(x, y - 1, false, curr, realx, realy);
//         }
//         else
//         {
//             if (x > 0)
//                 ser(x - 1, y, true, curr, realx, realy);
//             if (y > 0)
//                 ser(x, y - 1, true, curr, realx, realy);
//         }
//     }
// }
// void solve()
// {
//     for (int i = 0; i <= 16; i++)
//     {
//         for (int j = 0; j <= 8; j++)
//         {
//             ser(i, j, true, 0, i, j);
//         }
//     }
//     for (auto i : s)
//         if (s2.count({i.fi, i.se}) == 0)
//             cout << i.fi << " " << i.se << '\n';
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