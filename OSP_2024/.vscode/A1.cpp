#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    string yeah = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'O' && s[i] != 'S' && s[i] != 'N')
        {
        }
        else
            yeah += s[i];
    }
    bool can = false;
    n = yeah.size();
    string brute[6] = {"OSN", "ONS", "SON", "SNO", "NOS", "NSO"};

    int curr = 0;
    int maxians = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (yeah[j] == brute[i][curr])
            {
                ans++;
                curr++;
                curr %= 3;
            }
        }
        maxians = max(maxians, ans);
        ans = 0;
        curr = 0;
    }
    if (maxians < 3)
    {
        cout << -1;
    }
    else
        cout << maxians;
}