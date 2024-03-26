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
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    string s;
    cin >> s;
    vi v;
    for (auto i : s)
    {
        int currs = SZ(v);
        if (i == '+')
        {
            v.pb(0);
        }
        else if (i == '-')
        {
            if (v[currs - 1] != 0 && v[currs - 1] == 0)
            {
                if (currs > 1)
                    v[currs - 2] = v[currs - 1];
            }
            v.pop_back();
        }
        else if (i == '1')
        {
            if (currs == 0)
                continue;
            if (v[currs - 1] == -1 && currs > 1)
            {
                cout << "NO\n";
                return;
            }

            v[currs - 1] = 1;
        }
        else
        {
            if (currs == 0)
            {
                cout << "NO\n";
                return;
            }
            if (v[currs - 1] == 1 || currs <= 1)
            {
                cout << "NO\n";
                return;
            }
            v[currs - 1] = -1;
        }
    }
    cout << "YES\n";

    // 1 2 3 4
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}