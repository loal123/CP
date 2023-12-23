#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[55];
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n + 1; i++)
        {
            bool checktrue = true;
            {
                if (abs(a[i] - H) % k != 0)
                {
                    checktrue = false;
                }
                if (a[i] < abs(H - (m - 1) * k))
                {
                    checktrue = false;
                }

                if (a[i] > abs(H + (m - 1) * k))
                {
                    checktrue = false;
                }
            }
            cout << checktrue << endl;
        }
    }
}