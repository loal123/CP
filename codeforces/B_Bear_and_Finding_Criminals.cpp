#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int b[105];
void solve()
{
    int n, a;
    cin >> n >> a;
    bool left = false;
    bool right = false;
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a + i - 1 >= n)
        {
            right = true;
        }
        if (a - i - 1 < 0)
        {
            left = true;
        }
        if (right && !left)
        {
            if (b[a - i - 1] == 1)
            {
                counts++;
            }
        }
        else if (!right && left)
        {
            if (b[a + i - 1] == 1)
            {
                counts++;
            }
        }
        else
        {
            if (b[a + i - 1] && b[a - i - 1] == 1)
            {
                counts += 2;
            }
        }
    }
    if (b[a - 1] == 1)
    {
        counts--;
    }
    cout << counts;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}