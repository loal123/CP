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
    int x = 0, y = 0, z = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int supergirl;
        cin >> supergirl;
        if (i % 3 == 0)
        {
            x += supergirl;
        }
        if (i % 3 == 1)
        {
            y += supergirl;
        }

        if (i % 3 == 2)
        {
            z += supergirl;
        }
    }
    if (x == max({x, y, z}))
        cout << "chest";
    else if (y == max({x, y, z}))
        cout << "biceps";
    else
    {
        cout << "back";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}