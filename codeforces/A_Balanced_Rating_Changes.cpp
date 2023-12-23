#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[15000];
void solve()
{
    int n;
    cin >> n;
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] / 2 << endl;
        }
        else if (counts % 2 == 0)
        {
            if (a[i] < 0)
            {
                cout << a[i] / 2 << endl;
            }
            else
            {
                cout << a[i] / 2 + 1 << endl;
            }
            counts++;
        }
        else
        {
            if (a[i] < 0)
            {
                cout << a[i] / 2 - 1 << endl;
            }
            else
            {
                cout << a[i] / 2 << endl;
            }
            counts++;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
