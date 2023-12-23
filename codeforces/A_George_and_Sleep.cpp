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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    string s, t;
    cin >> s >> t;

    int a1 = stoi(s.substr(0, 2)), a2 = stoi(s.substr(3, 2)), b1 = stoi(t.substr(0, 2)), b2 = stoi(t.substr(3, 2));
    if (a1 - b1 < 0)
    {
        a1 = 24 - (b1 - a1);
    }
    else
    {
        a1 -= b1;
    }
    if (a2 - b2 < 0)
    {
        a2 = 60 - (b2 - a2);
        if (a1 == 0)
        {
            a1 = 23;
        }
        else
        {
            a1 -= 1;
        }
    }
    else
    {
        a2 -= b2;
    }
    if (a1 < 10)
    {
        cout << 0;
    }
    cout << a1;
    cout << ':';
    if (a2 < 10)
    {
        cout << 0;
    }
    cout << a2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}