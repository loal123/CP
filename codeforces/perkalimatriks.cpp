#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, p;
    cin >> n >> m >> p;
    int a[105][105];
    int b[105][105];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            cin >> b[i][j];
        }
    }

    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int f = 1; f <= p; f++)
        {
            for (int j = 1; j <= p; j++)
            {
                total += a[i][j] * b[j][f];
            }
            cout << total << ' ';
            total = 0;
        }
        cout << endl;
    }
}