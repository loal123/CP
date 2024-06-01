#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    int n, q;
    cin >> n >> q;
    int pref[n + 1];
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        if (r - l + 1 == 2)
        {
            if (pref[r] - pref[l - 1] == 1)
            {
                cout << "NO\n";
            }
            else
                cout << "YES\n";
        }
        else
            cout << "YES\n";
    }
}