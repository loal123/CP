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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool can = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            can = false;
    }
    if (can)
    {
        cout << "Yes";
    }
    else
    {
        can = true;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                s.insert(i + 1, t);
                i += m;
            }
        }
        for (int i = 0; i < s.size() - 1; i++)
        {
            {
                if (s[i] == s[i + 1])
                {
                    can = false;
                    break;
                }
            }
        }

        if (can)
        {
            cout << "Yes";
        }
        else
            cout << "No";
    }
    cout << endl;
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