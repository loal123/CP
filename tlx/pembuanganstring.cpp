#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;

    int lenstr = t.length();
    while (1)
    {
        int st = (s.find(t));
        if (st == -1)
        {
            break;
        }
        s.erase(st, lenstr);
    }
    cout << s;
}
