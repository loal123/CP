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
    bool ireallyreallyloveflandrescarletsomuchthatiwtctfflffdfp[140] = {false};
    int supercutegirl;
    string iwtctff;
    cin >> supercutegirl >> iwtctff;
    bool flandre = true;
    for (int i = 0; i < supercutegirl; i++)
    {
        if (ireallyreallyloveflandrescarletsomuchthatiwtctfflffdfp[iwtctff[i]] == true && iwtctff[i] != iwtctff[i - 1])
        {
            flandre = false;
            break;
        }
        else
            ireallyreallyloveflandrescarletsomuchthatiwtctfflffdfp[iwtctff[i]] = true;
    }
    if (flandre)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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