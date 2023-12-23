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
    ll supercutegirl;
    cin >> supercutegirl;
    bool idk[supercutegirl + 1] = {false};

    bool can = true;

    ll have = false;
    ll big = -1;
    ll last;
    cin >> last;
    idk[last] = true;
    int cute = last;

    for (int i = 0; i < supercutegirl - 2; i++)
    {
        int iwtctff;
        cin >> iwtctff;
        if (iwtctff - last > supercutegirl)
        {
            big = iwtctff - last;
        }
        else
        {
            idk[iwtctff - last] = true;
        }
        last = iwtctff - last;
    }

    ll missing = 0;
    ll total = 0;

    for (int i = 1; i <= supercutegirl; i++)
    {
        if (!idk[i])
        {
            missing++;
            total += i;
        }
    }

    else if (missing == 2 && total == big)
            cout
        << "YES";
    else if (missing == 1)
            cout
        << "YES";

    else cout << "NO";
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