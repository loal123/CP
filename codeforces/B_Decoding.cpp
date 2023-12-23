#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    char a[2005];
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s2;
    int z = 0;
    if (s.size() % 2 == 1)
    {
        a[s.size() / 2] = s[0];
        z = 1;
        for (int i = 1; i <= n / 2; i++)
        {
            a[s.size() / 2 - i] = s[z];
            a[s.size() / 2 + i] = s[z + 1];
            z += 2;
        }
    }
    else
    {
        for (int i = 1; i <= n / 2; i++)
        {
            a[s.size() / 2 + i - 1] = s[z + 1];

            a[s.size() / 2 - i] = s[z];
            z += 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}