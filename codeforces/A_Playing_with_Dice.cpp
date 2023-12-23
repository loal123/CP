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
    int x, y;
    cin >> x >> y;
    int p1 = 0, d = 0, p2 = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(x - i) < abs(y - i))
        {
            p1++;
        }
        else if (abs(x - i) == abs(y - i))
        {
            d++;
        }
        else
            p2++;
    }

    cout << p1 << " " << d << " " << p2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}