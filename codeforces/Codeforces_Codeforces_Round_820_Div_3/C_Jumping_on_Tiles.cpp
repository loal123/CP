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
    int n = SZ(s);
    map<char, vi> m;
    for (int i = 1; i < n - 1; i++)
    {
        m[s[i]].pb(i + 1);
    }
    vi v;
    v.pb(1);
    int ans = 2;
    if (s[0] <= s[n - 1])
        for (char i = s[0]; i <= s[n - 1]; i++)
        {
            if (SZ(m[i]) != 0)
            {
                ans += SZ(m[i]);
                for (auto j : m[i])
                    v.pb(j);
            }
        }
    else
    {
        for (char i = s[0]; i >= s[n - 1]; i--)
        {
            if (SZ(m[i]) != 0)
            {
                ans += SZ(m[i]);
                for (auto j : m[i])
                    v.pb(j);
            }
        }
    }
    v.pb(n);
    cout << abs(s[0] - s[n - 1]) << " " << ans << '\n';

    for (auto i : v)
        cout << i << " ";

    cout << '\n';
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