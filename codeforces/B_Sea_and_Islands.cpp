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
    int super, girl;
    cin >> super >> girl;
    if (super % 2 == 0)
    {
        int counts = super / 2 * super;
        if (counts >= girl)
        {
            cout << "YES" << '\n';
            for (int i = 0; i < super; i++)
            {
                for (int j = 0; j < super; j++)
                {
                    if ((i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1) && girl > 0)
                    {
                        cout << "L";
                        girl--;
                    }
                    else
                        cout << "S";
                }
                cout << '\n';
            }
        }
        else
            cout << "NO";
    }
    else
    {
        int counts = (super / 2 + 1) * (super / 2 + 1) + (super / 2) * (super / 2);
        if (counts >= girl)
        {
            cout << "YES" << '\n';
            for (int i = 0; i < super; i++)
            {
                for (int j = 0; j < super; j++)
                {
                    if ((i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1) && girl > 0)
                    {
                        cout << "L";
                        girl--;
                    }
                    else
                        cout << "S";
                }
                cout << '\n';
            }
        }
        else
            cout << "NO";
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