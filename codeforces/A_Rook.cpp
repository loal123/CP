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
    string s;
    cin >> s;
    char a[8] = {'a',
                 'b',
                 'c',
                 'd',
                 'e',
                 'f',
                 'g',
                 'h'};
    {
        for (int i = 0; i < 8; i++)
        {
            if (a[i] != s[0])
            {
                cout << a[i] << s[1] << endl;
            }
        }
        for (int i = 1; i <= 8; i++)
        {
            if (i != s[1] - '0')
            {
                cout << s[0] << i << endl;
            }
        }
    }
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