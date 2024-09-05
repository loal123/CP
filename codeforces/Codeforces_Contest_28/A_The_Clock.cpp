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
void comp(string &x)
{
    if (SZ(x) == 1)
    {
        x = '0' + x;
    }
}
bool checkp(string a, string b)
{
    comp(a);
    comp(b);
    string l, r;
    l = r = a + b;
    reverse(all(r));
    if (l == r)
        return true;
    return false;
}

void solve()
{
    int ans = 0;
    string s;
    cin >> s;
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    int x;
    cin >> x;
    set<pii> has;
    while (!has.count({h, m}))
    {
        string a = to_string(h);
        string b = to_string(m);
        has.insert({h, m});
        if (checkp(a, b))
        {
            ans++;
        }

        h += x / 60;
        m += x % 60;
        if (m >= 60)
        {
            h++;
            m %= 60;
        }
        h %= 24;
    }
    cout << ans << '\n';
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