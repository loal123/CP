#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if (n == 1)
    {
        cout << 0;
    }
    else
    {
        bool m = true;
        ll total = 0;
        int counts = 0;
        while (1)
        {
            for (int i = 0; i < s.size(); i++)
            {

                total += s[i] - '0';
            }
            if (total == 0)
            {
                break;
            }
            else if (total >= 10)
            {
                counts++;
                s = to_string(total);
                total = 0;
            }
            else
            {
                counts++;
                break;
            }
        }
        cout << counts;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}