#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int len = s.size();
    if (s == "0")
    {
        cout << 0;
    }
    else if (len % 2 == 0)
    {
        cout << len / 2;
    }
    else
    {
        int counts = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '1')
            {
                counts++;
            }
        }
        if (counts == 1)
        {
            cout << len / 2;
        }
        else
        {
            cout << len / 2 + 1;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}