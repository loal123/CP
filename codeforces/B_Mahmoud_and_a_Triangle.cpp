#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    bool can = false;
    for (int i = 0; i < n - 2; i++)
    {
        int d = a[i], b = a[i + 1], c = a[i + 2];

        if (d + b > c && d + c > b && b + c > d)
        {
            can = true;
            break;
        }
    }
    if (can)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}