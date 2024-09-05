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
    int n, m;
    cin >> n >> m;
    vector<pll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].se;
    }
    // ll ans = INF;
    // for (int i = 0; i < n; i++)
    // {
    //     ans = min(ans, max(v[i].fi, v[i].se));
    // }
    // cout << ans << '\n';
    vl curr(n + 1, 0);
    priority_queue<pll> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push({0, i});
        // curr[i] = max(v[i].fi, v[i].se);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pll u = pq.top();
            u.fi = -u.fi;
            if (j == u.se)
                curr[u.se] += max(v[u.se].fi, v[u.se].se);
            else
                curr[u.se] += v[u.se].se;
            pq.pop();
            pq.push({-curr[u.se], u.se});
        }
    }

    ll ans = INFF;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, curr[i]);
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}