#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define mp make_pair

const ll mod = 1e9 + 7;

// Super is a cute girl
void solve()
{
    while (1)
    {
        string s1, s2;

        int a[600] = {0};
        if (!(cin >> s1))
            break;
        if (!(cin >> s2))
            break;

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        for (int i = 0; i < s1.size(); i++)
        {
            {
                for (int j = 0; j < s2.size(); j++)
                {
                    a[i + j] += (s1[i] - '0') * (s2[j] - '0');
                }
            }
        }
        for (int i = 0; i < 599; i++)
        {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
        int i = 599;
        while (i > 0 && a[i] == 0)
            i--;
        for (; i >= 0; i--)
            cout << a[i];
        cout << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}