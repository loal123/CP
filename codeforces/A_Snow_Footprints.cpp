#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool rights = false;
bool lefts = false;
void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int t;
    int m;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '.' && s[i + 1] == 'R')
        {
            m = i + 1 + 1;
            bool rights = true;
        }
        if (right)
        {
            if (s[i] == 'R' && s[i + 1] == 'L')
            {
                t = i + 1;
                break;
            }

            if (s[i] == 'R' && s[i + 1] == '.')
            {
                t = i + 1 + 1;
                break;
            }
        }
        if (s[i] == '.' && s[i + 1] == 'L')
        {
            bool left = true;
            t = i + 1;
        }
        if (left)
        {
            if (s[i] == 'L' && s[i + 1] == '.')
            {
                m = i + 1;
            }
        }
    }
    cout << m << " " << t;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}