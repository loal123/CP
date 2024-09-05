// Problem: C. String Modification
// Contest: Codeforces - CP Theme 18
// URL: https://codeforces.com/gym/530731/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

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
    int n;
    string s;
    cin >> n >> s;
    vector<pair<string, int>> v;
    for (int i = 1; i <= n; i++)
    {
        string curr = s;

        for (int j = 0; j < n; j++)
        {
            curr[j] = s[(((j + i - 1) % n) + n) % n];
        }
        if (i % 2 == n % 2)
        {
            reverse(curr.begin() + n - i + 1, curr.end());
        }
        v.pb({curr, i});
    }
    sort(all(v));
    cout << v[0].fi << '\n'
         << v[0].se << '\n';
    // for (auto i : v)
    //     cout << i.fi << " " << i.se << '\n';
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