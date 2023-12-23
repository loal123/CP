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
    int n, m;
    cin >> n >> m;
    string s, z;
    cin >> s >> z;
    int counts = 0;
    for (int i = 0; i < 6; i++)
    {
        if (s.find(z) != -1)
        {
            can = true;

            break;
        }
        s += s;
        counts++;
    }
    if (can)
        cout << counts << endl;
    else
        cout << -1 << endl;
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