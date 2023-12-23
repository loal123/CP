#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define first fi;
#define second se;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int z;
        cin >> z;
        double angles = 180;
        bool can = false;
        for (int i = 3; i < 1e7; i++)
        {
            double supergirl = angles / i;
            if (z == supergirl)
            {
                can = true;
                break;
            }
            if (z < supergirl)
            {
                break;
            }
            angles += 180;
        }
        if (can)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}