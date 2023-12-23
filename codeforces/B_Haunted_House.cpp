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
    int n;
    string s;
    cin >> n >> s;
    int size = s.size();
    int rn = 1;
    while (n--)
    {

        bool have = false;
        int counts = 0;
        int pos;
        int wow = 0;
        int recent;
        int check = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '1')
                wow++;
        }
        if (size - wow < rn)
        {
            cout << -1 << " ";
        }
        else
        {
            for (int i = size - 1; i >= 0; i--)
            {
                if (have)
                {
                    if (s[i] == '1')
                    {
                        counts++;
                        recent = i;
                        check = 0;
                    }
                    else if (check >= rn - 1)
                    {
                        break;
                    }
                    else
                        check++;
                }
                else
                {
                    if (s[i] == '1')
                    {
                        have = true;
                        pos = i;
                        recent = i;
                    }
                }
            }
            cout << (counts + 1) * (abs(rn - (size - pos - 1))) << " ";
            rn++;
        }
    }
    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}