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
    int idfk[3] = {super, cute, girl};
    int flandre[3] = {super, cute, girl};
    sort(idfk, idfk + 3);
    for (int i = 0; i < 3; i++)
    {
        if (flandre[i] < idfk[2])
        {
            cout << idfk[2] - flandre[i] + 1 << " ";
        }
        else
        {
            if (idfk[2] == idfk[1])
            {
                cout << 1 << " ";
            }
            else
                cout << 0 << " ";
        }
    }
    cout << '\n';
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