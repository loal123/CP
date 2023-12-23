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
    int super, cute, girl;
    cin >> super >> cute >> girl;
    int a = gcd(super, cute);
    int b = gcd(cute, girl);
    int c = gcd(super, girl);

    if (super == cute && girl == cute)
    {
        cout << sqrt(a) * 12;
    }
    else if (a * b == cute)
    {
        cout << a * 4 + b * 4 + super / a * 4;
    }
    else if (b * c == girl)
    {
        cout << b * 4 + c * 4 + cute / b * 4;
    }
    else if (a * c == super)
    {
        cout << a * 4 + c * 4 + girl / c * 4;
    }
    else
    {
        int m[3] = {super, cute, girl};
        sort(m, m + 3);
        int wow = max({a, b, c});
        int idk = min({a, b, c});
        for (int i = 1; i <= wow; i++)
        {
            for (int j = 1; j <= wow; j++)
            {
                for (int k = 1; k <= wow; k++)
                {
                    if (i * j == super && j * k == cute && i * k == girl)
                    {
                        cout << i * 4 + j * 4 + k * 4;
                        break;
                    }
                }
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}