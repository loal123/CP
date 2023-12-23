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
    int counts = 0;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char c;
            cin >> c;
            if (c == 'X')
            {
                if (min(i, j) < 5)
                    counts += min(i, j);
                else if (min(i, j) == 5 || min(i, j) == 6)
                    counts += 5;
                else
                    counts += 11 - min(i, j);
            }
        }
    }
    cout << counts << endl;
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