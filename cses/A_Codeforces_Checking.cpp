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
    bool can = false;
    string idfk = "codeforces";
    char idk;
    cin >> idk;
    for (int i = 0; i < idfk.size(); i++)
    {
        if (idfk[i] == idk)
        {
            can = true;
        }
    }
    if (can)
        cout << "YES";
    else
        cout << "NO";

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