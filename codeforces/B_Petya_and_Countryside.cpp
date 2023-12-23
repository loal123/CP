#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a[1005];
    int n;
    bool middle = false;
    bool have = false;
    bool counted = false;

    cin >> n;
    int max = 0;
    int maxpos;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    a[0] = 1001;
    a[n + 1] = 1001;
    for (int i = 1; i <= n; i++)
    {
        int counts = 1;

        for (int j = 0; i + j <= n; j++)
        {

            if (a[i + j] >= a[i + j + 1])
            {
                counts++;
            }
            else
            {
                break;
            }
        }
        for (int j = 0; j < n; j++)
        {

            if (a[i - j] >= a[i - j - 1])
            {
                counts++;
            }
            else
            {
                break;
            }
            counted = true;
        }
        if (counts > max)
        {
            max = counts;
        }
    }

    cout << max;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
