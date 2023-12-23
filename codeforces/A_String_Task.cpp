#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define first fi;
#define second se;
void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        if (s[i] != 'a' && s[i] != 'i' && s[i] != 'e' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {

            cout << '.' << s[i];
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}