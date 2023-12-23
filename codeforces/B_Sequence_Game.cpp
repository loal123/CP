#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > 1)
            count++;
    }
    cout << n + count << endl;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > 1)
            cout << a[i] << " " << a[i] + 1 << " ";
        else if (a[i + 1] - a[i] < -1)
        {
            cout << a[i] << " " << a[i] + (a[i + 1] - a[i]) << " ";
        }
        else
        {
            cout << a[i] << " ";
        }
    }
    cout << a[n - 1];
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