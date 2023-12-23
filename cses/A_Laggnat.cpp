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
    int a, b;
    cin >> b >> a;
    bool can = true;
    if (b >= 1 && b <= 7)
    {
        if (b % 2 == 0)
        {
            if (b == 2)
            {
                if (a > 28)
                    can = false;
            }
            else
            {
                if (a > 30)
                    can = false;
            }
        }
        else
        {
            if (a > 31)
                can = false;
        }
    }
    else if (b >= 8 && b <= 12)
    {
        if (b % 2 == 0)
        {
            if (a > 31)
                can = false;
        }
        else
        {
            if (a > 30)
                can = false;
        }
    }
    else
    {
        can = false;
    }
    if (can)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}