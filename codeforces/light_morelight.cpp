#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, k;
    cin >> n >> k;
    bool a[15];
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        while (m > 0)
        {
            int check = m % 10;
            a[check] = true;
            m /= 10;
        }
    }
    bool pr = true;
    for (int i = 0; i <= k; i++)
    {
        if (a[i] = false)
        {
            pr = false;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}