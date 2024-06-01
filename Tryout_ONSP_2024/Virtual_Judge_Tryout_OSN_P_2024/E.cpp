#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
int main()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    map<char, int> s;
    s['N'] = 1;
    s['E'] = 0;
    s['S'] = 3;
    s['W'] = 2;
    for (int i = 0; i < m; i++)
    {
        char x;
        cin >> x;
        if (i != m - 1)
        {
            if (x == 'X')
            {
                cout << -1 << endl;
                return 0;
            }
            else
            {
                ans += s[x];
            }
        }
    }
    cout << ans;

    // we can just uh,
}