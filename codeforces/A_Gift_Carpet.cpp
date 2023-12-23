#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s[25];
    bool can = false;
    bool v = false;
    bool ii = false;
    bool c = false;
    bool k = false;
    int vv, iii, kk, aa;

    int n, m;
    cin >> n >> m;
    int count = 0;
    bool alr = false;
    for (int i = 0; i < n; i++)
    {

        cin >> s[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!alr)
                if (s[j][i] == 'v')
                {
                    v = true;
                    vv = i;
                    alr = true;
                    break;
                }
            if (v)
            {
                if (s[j][i] == 'i' && i > vv)
                {
                    v = false;
                    ii = true;
                    iii = i;
                    break;
                }
            }
            if (ii)
            {
                if (s[j][i] == 'k' && i > iii)
                {
                    ii = false;
                    c = true;
                    kk = i;
                }
            }
            if (c)
            {
                if (s[j][i] == 'a' && i > kk)
                {
                    c = false;

                    k = true;
                    break;
                }
            }
        }
    }
    if (k)
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}