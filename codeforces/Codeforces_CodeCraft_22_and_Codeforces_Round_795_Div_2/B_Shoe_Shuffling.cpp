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
    int n;
    cin >> n;
    map<int, vi> m;
    vi v(n);
    vi ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]].pb(i + 1);
    }

    for (auto i : m)
    {
        if (i.se.size() == 1)
        {
            cout << -1 << endl;
            return;
        }
        int sz = i.se.size();
        for (int j = 0; j < sz; j++)
        {
            ans[i.se[j] - 1] = i.se[(j + 1) % sz];
        }
    }
    for (auto i : ans)
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