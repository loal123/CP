#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[200005];
void solve()
{
    int min = 1e9;
    int minpos = 0;
    int n;
    int can = false;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            can = true;
        }
        if (a[i + 1] - a[i] < min && s[i] == 'R' && s[i + 1] == 'L')
        {
            min = a[i + 1] - a[i];
            minpos = i;
        }
    }
    if (can)
    {
        cout << (a[minpos + 1] - a[minpos]) / 2;
    }
    else
    {
        cout << -1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}