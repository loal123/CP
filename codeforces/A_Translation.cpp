#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s, ss;

    cin >> s >> ss;
    bool reverse = true;
    int n = s.size() - 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ss[n])
        {
            reverse = false;
        }
        n--;
    }
    if (reverse)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}