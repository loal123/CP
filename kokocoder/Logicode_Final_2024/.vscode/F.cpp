#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
const int INF = 1e9 + 5;
const ll mod = 1e9 + 7;
ll ask(ll x, ll y)
{
    cout << "? " << x << " " << y << endl;
    ll ans;
    cin >> ans;
    return ans;
}
void answer(ll x, ll y)
{
    cout << "! " << x << " " << y << endl;
}

int main()
{
    int r, c, q;
    cin >> r >> c >> q;
    ll one = (ask(1, 1));
    for (int i = 0; i <= 70000000; i++)
    {
        ll xd = (ll)i * i;
        ll yeah = sqrt(one - xd);

        if ((ll)yeah * yeah == one - xd)
        {
            answer(1 + i, 1 + yeah);
            return 0;
        }
    }
    // some geomtry idk how to find lol
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vi vector<int>
// const int INF = 1e9 + 5;
// const ll mod = 1e9 + 7;
// ll ask(ll x, ll y)
// {
//     cout << "? " << x << " " << y << endl;
//     ll ans;
//     cin >> ans;
//     return ans;
// }
// void answer(ll x, ll y)
// {
//     cout << "! " << x << " " << y << endl;
// }
// int main()
// {
//     int r, c, q;
//     cin >> r >> c >> q;

//     // subsoal 3:
//     if (r == 1 || c == 1)
//     {
//         ll ans = sqrt(ask(1, 1));
//         if (r == 1)
//         {

//             answer(1, 1 + ans);
//         }
//         else
//             answer(1 + ans, 1);
//     }
//     else
//     {
//         // cook

//         for (int i = 1; i <= 10; i++)
//         {
//             for (int j = 1; j <= 10; j++)
//             {
//                 if (ask(i, j) == 0)
//                 {
//                     answer(i, j);
//                     return 0;
//                 }
//             }
//         }
//     }
// }