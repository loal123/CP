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
    int super, flandre = 0;
    string girl;
    cin >> super >> girl;
    for (int i = 0; i < super; i++)
    {
        if (girl[i] == 'x')
            flandre++;
    }
    if (flandre == super - flandre)
        cout << 0 << endl
             << girl;
    else
    {

        int supercutegirl;
        if (flandre > super - flandre)
        {
            supercutegirl = flandre - super / 2;
            cout << supercutegirl << endl;
            for (int i = 0; i < super; i++)
            {
                if (supercutegirl >= 1)
                {
                    if (girl[i] == 'x')
                    {
                        cout << 'X';
                        supercutegirl--;
                    }
                    else
                    {
                        cout << girl[i];
                    }
                }
                else
                {
                    cout << girl[i];
                }
            }
        }
        else
        {

            supercutegirl = (super - flandre) - (super / 2);
            cout << supercutegirl << endl;
            for (int i = 0; i < super; i++)
            {
                if (supercutegirl >= 1)
                {
                    if (girl[i] == 'X')
                    {
                        cout << 'x';
                        supercutegirl--;
                    }
                    else
                    {
                        cout << girl[i];
                    }
                }
                else
                {
                    cout << girl[i];
                }
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}