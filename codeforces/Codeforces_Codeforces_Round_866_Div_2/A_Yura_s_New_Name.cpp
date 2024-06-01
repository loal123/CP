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
    ll ans = 0;
    int n = SZ(s);
    string under = "";
    string upper = "";
    under += '_';
    upper += '^';
    if (s[0] == '_')
    {
        ans++;
        s.insert(0, upper);
    }
    if (s[SZ(s) - 1] == '_')
    {
        s.insert(SZ(s), upper);
        ans++;
    }
    int curr = 0;
    for (int i = 1; i < SZ(s); i++)
    {
        if (s[i] == '^')
        {
            ans += max(curr - 1, 0);
            curr = 0;
        }
        else
            curr++;
    }
    if (SZ(s) == 1)
        ans++;
    cout << ans << endl;
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