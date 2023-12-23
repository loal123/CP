#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s1, s2;
    bool check = false;
    int a1 = 0, a2 = 0, a3 = 0;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s1.size(); i++)
    {

        if (check)
        {
            a2++;
        }
        else
        {
            a1++;
        }
        if (s1[i] == '|')
        {
            check = true;
            a1--;
        }
    }
    if ((a1 + a2 + s2.size()) % 2 == 1 || min(a1, a2) + s2.size() < max(a1, a2))
    {
        cout << "Impossible" << endl;
    }
    else
    {
        int i = 0;
        int l = s2.size();
        while (l--)
        {
            if (a1 <= a2)
            {
                string m = "";
                m += s2[i];
                s1.insert(s1.find('|'), m);
                a1++;
                i++;
            }
            else if (a1 > a2)
            {
                string m = "";
                m += s2[i];
                s1.insert(s1.find('|') + 1, m);
                a2++;
                i++;
            }
        }
        cout << s1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}