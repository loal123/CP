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
    int super, girl, supergirl = 0;
    cin >> super >> girl;
    for (int i = 0; i < super; i++)
    {
        int flandre;
        cin >> flandre;
        supergirl += flandre;
    }
    if (supergirl == 0)
    {
        cout << 0;
    }
    else if (abs(supergirl) <= girl)
    {
        cout << 1;
    }

    else
    {
        if (abs(supergirl) % girl == 0)
            cout << abs(supergirl) / girl;
        else
        {
            cout << abs(supergirl) / girl + 1;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}