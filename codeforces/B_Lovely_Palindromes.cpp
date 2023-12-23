#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    int lens = s.size();

    cout << s;
    for (int i = lens - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}