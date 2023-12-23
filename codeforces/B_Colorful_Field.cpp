#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1005];
int b[1005];
void solve()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    string fruits[3] = {"Grapes", "Carrots", "Kiwis"};

    for (int i = 0; i < k; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < t; i++)
    {
        int y, z;
        cin >> y >> z;
        int count = 0;
        bool waste = false;
        for (int j = 0; j < k; j++) // osn 2a thing i kinda did

        {
            if ((y - 1) * m + z > (a[j] - 1) * m + b[j])
            {
                count++;
            }
            if (y == a[j] && z == b[j])
            {
                waste = true;
                break;
            }
        }
        if (waste)
        {
            cout << "Waste" << endl;
        }
        else
        {
            cout << fruits[((y - 1) * m + z - count) % 3] << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}