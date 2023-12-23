#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    cout << abs(count1 - count2);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}