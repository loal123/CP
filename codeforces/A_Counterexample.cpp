#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int gcf(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcf(b, a % b);
    }
}
void solve()
{
    ll l, r;
    cin >> l >> r;
    bool check = false;
    if (r - l < 2)
    {
        cout << -1 << endl;
    }
    else
    {
        for (ll i = l; i <= r - 2; i++)
        {
            if (gcf(i, i + 2) != 1)
            {
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                check = true;
                break;
            }
        }
        if (!check)
        {
            cout << -1 << endl;
        }
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}