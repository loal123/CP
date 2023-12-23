#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{

    ll n;
    cin >> n;
    int j;
    cout << 1 << " ";

    int check[n + 1];
    for (int i = 1; i <= n; i++)
    {
        check[i] = 0;
    }
    for (int i = 2; i <= n; i++)
    {

        if (i < n / 2 - 1 && i + 1 >= n / 2 - 1)
        {
            j = i;
        }
        if (i < (n / ((n / 5) + 1)))
        {
            cout << i << " ";
            check[i]++;
        }
        else
        {
            if (i * 2 <= n)
            {
                cout << i << " ";
                cout << i * 2 << " ";
                check[i]++;
                check[i * 2]++;
            }
        }
    }
    if (!check[j * 3] && j * 3 < n)
    {
        cout << j * 3 << " ";
        check[j * 3]++;
    }
    for (int i = 2; i <= n; i++)
    {
        if (!check[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}