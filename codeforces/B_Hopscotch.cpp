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
    int super, cute, girl;
    cin >> super >> cute >> girl;

    if (super == 0)
    {
        cout << -1;
    }
    if (girl % super == 0)
    {
        cout << -1;
    }
    else
    {
        int ypos = girl / super + 1;
        if (ypos < 3)
        {
            if (abs(cute) >= (double)super / 2)
            {
                cout << -1;
            }
            else
                cout << ypos;
        }
        else
        {
            if (ypos % 2 == 1)
            {
                ypos += (ypos - 3) / 2;
                if (cute == 0)
                {
                    cout << -1;
                }

                else if (abs(cute) >= super)
                {
                    cout << -1;
                }

                else if (cute < 0)
                {
                    cout << ypos;
                }
                else
                {
                    cout << ypos + 1;
                }
            }
            else
            {
                if (cute == 0)
                    cout << ypos + (ypos - 2) / 2;
                else if (abs(cute) < double(super / 2))
                    cout << ypos + (ypos - 2) / 2;
                else if (abs(cute) >= double(super / 2))
                {
                    cout << -1;
                }
            }
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