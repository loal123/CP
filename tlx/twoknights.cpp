#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        ll k = (i * i - 1);
        k *= i * i;
        k /= 2;
        if (i >= 3)
        {
            ll m = i - 2;

            ll j = (m * (m + 1));

            k -= j / 2 * 8;
        }
        cout << k << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
