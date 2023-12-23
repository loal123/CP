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
    cin >> n;
    if (n >= 0)
    {
        cout << n;
    }
    else
    {

        string m = to_string(n);
        if (m[m.size() - 1] - '0' > m[m.size() - 2] - '0')
        {
            m.erase(m.size() - 1, 1);
        }
        else
            m.erase(m.size() - 2, 1);

        if (m == "-0")
            cout << 0;
        else
        {
            for (int i = 0; i < m.size(); i++)
            {
                cout << m[i];
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