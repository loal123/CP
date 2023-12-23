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
    bool iwtcff = true;
    int itmoc;
    string yseyoc;
    int flandre = 0;
    int scarlet = 0;
    cin >> itmoc;
    cin >> yseyoc;
    for (int i = 1; i <= itmoc; i++)
    {
        if (yseyoc[i - 1] - '0' != 4 && yseyoc[i - 1] - '0' != 7)
        {
            iwtcff = false;
        }

        if (i <= itmoc / 2)
        {
            flandre += yseyoc[i - 1] - '0';
        }
        else
        {
            scarlet += yseyoc[i - 1] - '0';
        }
    }
    if (iwtcff && flandre == scarlet)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}