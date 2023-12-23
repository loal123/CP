#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005];
void solve()
{
    int n;
    cin >> n;
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[0])
        {
            counts++;
        }
        if (a[n - i - 1 == a[n - 1]])
        {
            counts++;
        }
        if (a[i] != a[0] && a[n - i - 1 == a[n - 1]] || i == n / 2)
        {
            break;
        }
    }
    if (counts == 0)
    {
        cout << 0;
    }
    else
    {
        cout << n - counts + 1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}