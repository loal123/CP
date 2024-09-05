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
vector<vector<pii>> adj;
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    adj = vector<vector<pii>>(n, vector<pii>());
    vl v(n);
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[--a].pb({--b, w});
        adj[b].pb({a, w});
        // now greedy (?)
        v[i] = w;
    }
    sort(all(v));

    int removes = m - n + 1;
    int sz = SZ(v);
    sz--;
    while (removes--)
    {
        sz--;
    }
    ll ans = 0;
    if (v[sz] > k)
    {
        while (v[sz--] > k)
            ans += v[sz + 1] - k;
    }
    else
    {
        int pos = upper_bound(all(v), k) - v.begin();

        ll mini = INFF;
        if (pos != n)
            mini = min(mini, abs(v[pos] - k));
        if (pos - 1 >= 0)
            mini = min(mini, abs(v[pos - 1] - k));
        if (pos - 2 >= 0)
            mini = min(mini, abs(v[pos - 2] - k));

        cout << mini << '\n';
        return;
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