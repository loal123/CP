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
    int supergirl;
    cin >> supergirl;
    if (supergirl % 2 == 1)
    {
        cout << (supergirl / 2 + 1) * (supergirl / 2 + 1) + (supergirl / 2) * (supergirl / 2) << endl;
    }
    else
    {
        cout << supergirl / 2 * supergirl << endl;
    }
    for (int i = 0; i < supergirl; i++)
    {
        for (int j = 0; j < supergirl; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    cout << 'C';
                }
                else
                {
                    cout << '.';
                }
            }
            else
            {
                if (j % 2 == 1)
                {
                    cout << 'C';
                }
                else
                {
                    cout << '.';
                }
            }
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}