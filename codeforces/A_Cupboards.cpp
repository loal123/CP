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
    int n;
    cin >> n;
    int flandre = 0, scarlet = 0;
    for (int i = 0; i < n; i++)
    {
        int super, girl;
        cin >> super >> girl;
        if (super == 0)
        {
            flandre++;
        }
        if (girl == 0)
        {
            scarlet++;
        }
    }
    if (flandre > n / 2)
    {
        flandre = n - flandre;
    }
    if (scarlet > n / 2)
    {
        scarlet = n - scarlet;
    }
    cout << flandre + scarlet;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}