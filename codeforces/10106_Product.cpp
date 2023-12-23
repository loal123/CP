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
        int a[500] = {0};
        if (!(cin >> s1))
            break;
        if (!(cin >> s2))
            break;
        for (int i = 0; i < s1.size(); i++)
        {
            for (int j = 0; j < s2.size(); j++)
            {
                int super = s1[i] - '0';
                int girl = s2[j] - '0';
                int flandre = super * girl;
                if (super * girl > 10)
                {

                    a[i + j] += flandre % 10;
                    has[i + j] += true;

                    flandre /= 10;
                    a[i + j + 1] += flandre % 10;
                    has[i + j + 1] = true;
                }
                else
                {
                    a[i + j + 1] += flandre % 10;
                    has[i + j + 1] = true;
                }
            }
        }
        for (int i = 500; i >= 0; i--)
        {
            if (has[i])
            {
                if (a[i] >= 10)
                {
                    a[i - 1] += a[i] % 10;
                    a[i] = a[i] % 10;
                }
            }
        }
        for (int i = 0; i < 500; i++)
        {
            if (has[i])
            {
                cout << a[i];
            }
        }

        cout << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}