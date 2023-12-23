#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, p;
    cin >> n >> p;
    int k[n], l[n];
    bool c[n][n] = {false};
    for (int i = 0; i < p; i++)
    {

        cin >> k[i] >> l[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        bool nyala = false;
        for (int i = 0; i < p; i++)
        {
            if (k[i] == 1)
            {
                if (x <= l[i] && y <= l[i])
                {
                    if (nyala)
                    {
                        nyala = false;
                    }
                    else
                    {
                        nyala = true;
                    }
                }
            }
            else
            {
                if (x >= l[i] && y >= l[i])
                {
                    if (nyala)
                    {
                        nyala = false;
                    }
                    else
                    {
                        nyala = true;
                    }
                }
            }
        }
        if (nyala)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}