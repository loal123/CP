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
    int supercutegirl, cute, girl;
    cin >> supercutegirl;

    for (int i = 0; i < supercutegirl; i++)
    {
        int iwtctff;
        cin >> iwtctff;
        if (iwtctff == 1)
        {
            cute = i;
        }
        if (iwtctff == supercutegirl)
        {
            girl = i;
        }
    }
    if (cute < girl)
    {
        if (cute > supercutegirl - girl - 1)
        {
            cout << girl;
        }
        else
        {
            cout << supercutegirl - cute - 1;
        }
    }
    else
    {
        if (girl > supercutegirl - cute - 1)
        {
            cout << cute;
        }
        else
        {
            cout << supercutegirl - girl - 1;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}