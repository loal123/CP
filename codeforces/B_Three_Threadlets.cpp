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
    int a, b, c;
    cin >> a >> b >> c;

    int d[3] = {a, b, c};
    int maximum = 0;
    int minimum = 0;
    int gc = gcd(gcd(a, b), c);
    sort(d, d + 3);
    for (int i = 0; i < 3; i++)
    {
        if (d[i] == d[2])
            maximum++;
        if (d[i] == d[0])
            minimum++;
    }

    if (a == b && b == c)
        cout << "YES";
    else if (d[0] == 1 && d[1] == 2 && d[2] == 3)
        cout << "YES";

    else if (d[0] / gc == 1 && d[1] / gc == 2 && d[2] / gc == 3)
        cout << "YES";
    else if (d[0] / gc == 1 && d[1] / gc == 1 && d[2] / gc <= 4)
        cout << "YES";
    else if (d[0] / gc == 1 && d[1] / gc == 2 && d[2] / gc == 2)
        cout << "YES";
    else
        cout << "NO";

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