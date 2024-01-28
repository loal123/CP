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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int supercutegirl;
    cin >> supercutegirl;
    string s;
    cin >> s;
    bool one = false;
    string rn = "";
    string temp = "";
    bool mmm = false;
    int x = 1;
    int y = 0;
    bool can = false;
    for (int i = 0; i < supercutegirl - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '0')
            can = true;
    }
    if (can)
    {
        for (auto i : s)
        {
            if (i == '1')
                break;
            x++;
        }
        reverse(s.begin(), s.end());
        for (auto i : s)
        {
            if (i == '0')
                break;
            y++;
        }
        for (int i = 0; i < x; i++)
        {
            cout << 0;
        }
        for (int i = 0; i < y; i++)
        {
            cout << 1;
        }
    }
    else
        cout << s;
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}