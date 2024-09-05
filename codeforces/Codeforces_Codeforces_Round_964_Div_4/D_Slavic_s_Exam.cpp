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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    string s, t;
    cin >> s >> t;
    int idx = 0;
    int n = SZ(s);
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (idx == SZ(t))
            ans += (s[i] == '?' ? 'a' : s[i]);
        else if (s[i] == '?')
        {
            ans += t[idx++];
        }
        else if (s[i] == t[idx])
        {
            ans += t[idx++];
        }
        else
            ans += (s[i] == '?' ? 'a' : s[i]);
    }
    if (idx == SZ(t))
    {
        cout << "YES\n";
        cout << ans << '\n';
    }
    else
        cout << "NO\n";
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