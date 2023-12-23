#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[4][4];
bool can = false;
void solve()
{
    char b1, b2;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int count1 = 0;
            int count2 = 0;
            if (a[i][j] == '#')
            {
                count1++;
            }

            if (a[i + 1][j] == '#')
                count1++;
            if (a[i][j + 1] == '#')
                count1++;
            if (a[i + 1][j + 1] == '#')
                count1++;
            if (a[i][j] == '.')
            {
                count2++;
            }

            if (a[i + 1][j] == '.')
                count2++;
            if (a[i][j + 1] == '.')
                count2++;
            if (a[i + 1][j + 1] == '.')
                count2++;

            if (count1 >= 3)
                can = true;
            if (count2 >= 3)
            {
                can = true;
            }
        }
    }
    if (can)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}