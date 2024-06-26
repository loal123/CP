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
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vi adj[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
                adj[i].pb(j);
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto j : adj[i])
        {
            for (int k = i + 1; k < j; k++)
            {
                int lengths = SZ(adj[k]);

                int amount = upper_bound(all(adj[k]), j) - adj[k].begin();
                ans += lengths - amount;
            }
        }
    }
    cout << ans << '\n';
    // 0 = 3
    // 1 = 2,5
    // 2 = 5
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