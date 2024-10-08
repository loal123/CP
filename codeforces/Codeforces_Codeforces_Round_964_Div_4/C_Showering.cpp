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
    int n, m, s;
    cin >> n >> m >> s;
    vector<pii> v;
    v.pb({0, 0});
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.pb({a, b});
    }

    v.pb(mp(s, s));

    sort(all(v));
    for (int i = 1; i <= n + 1; i++)
    {
        if (v[i].fi - v[i - 1].se >= m)
        {
            cout << "YES\n";
            return;
        }
    }

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