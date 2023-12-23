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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int gpos = s.find('G');
    int tpos = s.find('T');
    bool can = false;
    if (tpos > gpos)
    {
        for (int i = gpos; i <= tpos; i += k)
        {
            if (s[i] == '#')
            {
                break;
            }
            if (s[i] == 'T')
            {
                can = true;
                break;
            }
        }
    }
    else
    {
        for (int i = gpos; i >= tpos; i -= k)
        {
            if (s[i] == '#')
            {
                break;
            }
            if (s[i] == 'T')
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