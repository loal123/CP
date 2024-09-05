#include <bits/stdc++.h>
using namespace std;
;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(26, 0);

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (auto j : s)
                cnt[j - 'a']++;
        }
        for (auto i : cnt)
            if (i % n != 0)
            {
                cout << "NO\n";
                        }
        cout << "YES\n";
    }
}