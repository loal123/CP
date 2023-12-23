#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {

            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    cout << s << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}