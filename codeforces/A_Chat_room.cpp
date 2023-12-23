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
    string s;
    cin >> s;
    bool h = false, e = false, l1 = false, l2 = false, o = false, can = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (!h)
        {
            if (s[i] == 'h')
                h = true;
        }
        if (h)
        {
            if (s[i] == 'e')
            {
                e = true;
                h = false;
            }
        }
        if (e)
        {
            if (s[i] == 'l')
            {
                l1 = true;
                e = false;
                continue;
            }
        }
        if (l1)
        {
            if (s[i] == 'l')
            {
                l2 = true;
                l1 = false;
            }
        }
        if (l2)
        {
            if (s[i] == 'o')
            {
                can = true;
                break;
            }
        }
    }

    if (can)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}