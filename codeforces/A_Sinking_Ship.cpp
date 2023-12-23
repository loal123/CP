#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
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
    vs super;
    vs is;
    vs cute;
    vs girl;

    for (int i = 0; i < n; i++)
    {
        string iwtctff, wwwlca;
        cin >> iwtctff >> wwwlca;
        if (wwwlca == "rat")
        {
            super.pb(iwtctff);
        }
        else if (wwwlca == "child" || wwwlca == "woman")
        {
            is.pb(iwtctff);
        }
        else if (wwwlca == "man")
        {
            cute.pb(iwtctff);
        }
        else if (wwwlca == "captain")
        {
            girl.pb(iwtctff);
        }
    }
    for (int i = 0; i < super.size(); i++)
    {
        cout << super[i] << endl;
    }
    for (int i = 0; i < is.size(); i++)
    {
        cout << is[i] << endl;
    }
    for (int i = 0; i < cute.size(); i++)
    {
        cout << cute[i] << endl;
    }
    for (int i = 0; i < girl.size(); i++)
    {
        cout << girl[i] << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}