#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;

    string s = "ROYGBIV";
    string s2 = "ROYG";
    cout << s2;
    for (int i = 4; i < n - 3; i++)
    {
        cout << s2.substr((i - 4) % 4, 1);
    }
    cout << "BIV";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}