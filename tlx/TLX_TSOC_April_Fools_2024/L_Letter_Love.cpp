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

map<char, pii> m;

void solve()
{
    char a, b;
    cin >> a >> b;

    if (m[a].fi != m[b].fi)
    {
        cout << "different\n";
        return;
    }
    cout << abs(m[a].se - m[b].se) << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl";
    string s3 = "zxcvbnm";
    for (int i = 0; i < 10; i++)
    {
        m[s1[i]] = {1, i};
        if (i < 9)
            m[s2[i]] = {2, i};
        if (i < 7)
            m[s3[i]] = {3, i};
    }
    int t;
    cin >> t;
    while (t--)
        solve();
}