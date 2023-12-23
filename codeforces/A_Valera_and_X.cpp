#include <bits/stdc++.h>
using namespace std;
char a[305][305];
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    char diag1 = a[0][0];
    char diag2 = a[0][1];
    bool cross = true;
    int f = n;
    for (int i = 0; i < n; i++)
    {
        f--;
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == f)
            {
                if (a[i][j] != diag1)
                {
                    cross = false;
                }
            }
            else
            {
                if (a[i][j] != diag2)
                {
                    cross = false;
                }
            }
        }
    }
    if (diag1 == diag2)
        cross = false;
    if (cross)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}