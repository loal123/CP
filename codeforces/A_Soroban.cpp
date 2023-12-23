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
    string supergirl;
    cin >> supergirl;
    for (int i = supergirl.size() - 1; i >= 0; i--)
    {
        int supercutegirl = supergirl[i] - '0';
        if (supercutegirl >= 5)
        {
            cout << "-O|";
            supercutegirl -= 5;
        }
        else
        {
            cout << "O-|";
        }
        for (int j = 0; j < supercutegirl; j++)
        {
            cout << "O";
        }
        cout << "-";
        for (int k = 0; k < 4 - supercutegirl; k++)
        {
            cout << "O";
        }
        cout << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}