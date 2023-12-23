#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[305];
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n * 2 + 1; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n * 2 + 1; i++)
    {
        if (k > 0)
        {
            if (i % 2 == 0)
            {
                if (a[i] - 1 > a[i + 1] && a[i] - 1 > a[i - 1])
                {
                    a[i]--;
                    k--;
                }
            }
        }
        cout << a[i] << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}