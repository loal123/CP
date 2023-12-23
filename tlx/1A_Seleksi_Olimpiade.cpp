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
    int n, k;
    cin >> n >> k;
    vector<pair<string, vector<int>>> v(n);
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        string supercutegirl;
        cin >> supercutegirl;
        v[i].fi = supercutegirl;

        for (int j = 0; j < 3; j++)
        {
            int iwtctff;
            cin >> iwtctff;
            v[j].se.pb(iwtctff);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
                }
    }
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