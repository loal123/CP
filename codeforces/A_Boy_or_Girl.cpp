#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, scheck;
    cin >> s;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (scheck.find(s[i]) == -1)
        {
            count++;
            scheck += s[i];
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}