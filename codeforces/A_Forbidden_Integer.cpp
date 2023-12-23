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
    if (girl == 1 && cute == 1 || super % 2 == 1 && cute == 2 && girl == 1)
        cout << "NO" << '\n';
    else if (girl != 1)
    {
        cout << "YES" << '\n'
             << super << '\n';
        for (int i = 0; i < super; i++)
        {
            cout << 1 << " ";
        }
        cout << '\n';
    }

    else
    {
        if (super == 1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            if (super % 2 == 0)
            {
                cout << super / 2 << '\n';

                for (int i = 0; i < super / 2; i++)
                {
                    cout << 2 << " ";
                }
            }
            else
            {
                cout << (super - 3) / 2 + 1 << '\n';
                for (int i = 0; i < (super - 3) / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << 3;
            }
            cout << '\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}