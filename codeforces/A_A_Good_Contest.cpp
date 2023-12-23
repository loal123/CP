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
    bool can = false;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int x1, x2;
        cin >> x1 >> x2;
        if (x1 >= 2400)
        {
            if (x2 > x1)
            {
                can = true;
            }
        }
    }
    if (can)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}