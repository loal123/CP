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
    string s;
    cin >> s;
    if (SZ(s) < 3)
    {
        cout << "NO\n";
        return;
    }
    if (s.substr(0, 2) != "10")
    {
        cout << "NO\n";
        return;
    }
    if (s[2] == '0')
    {
        cout << "NO\n";
        return;
    }
    int n = SZ(s);
    cout << (stoi(s.substr(2, n - 2)) >= 2 ? "YES\n" : "NO\n");
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