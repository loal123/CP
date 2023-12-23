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
        bool has[500] = {false};
        int a[500];
        if (!(cin >> s1))
            break;
        if (!(cin >> s2))
            break;
        for (int i = 0; i < s1.size(); i++)
        {
            for (int i = 0; i < s2.size(); i++)
            {
                int super = s1[i] - '0';
                int girl = s2[i] - '0';
                if (super * girl > 10)
                {

                    int flandre = super * girl;
                    if (!has[i + i])
                    {
                        a[i + i] = flandre % 10;
                        has[i + i] = true;
                    }
                    else
                    {
                    }

                    flandre /= 10;
                    a[i + i + 1] = flandre % 10;
                    has[i + i + 1] = true;
                }
                else
                {
                }
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}