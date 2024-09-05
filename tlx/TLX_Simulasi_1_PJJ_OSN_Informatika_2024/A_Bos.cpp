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
const int maxn = 1e5 + 5;
vector<vi> adj;
vector<bool> vis;

void solve()
{
    int n;
    cin >> n;
    adj = vector<vi>(n, vi());

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            x--;
            adj[x].pb(i);
        }
    }
    ll ans = INFF;
    for (int i = 0; i < n; i++)
    {
        vis = vector<bool>(n, 0);
        ll cnt = 0;

        int processed = 0;
        queue<pll> q;
        q.push({i, 1});
        while (!q.empty())
        {

            pll v = q.front();
            q.pop();
            if (vis[v.fi])
                continue;
            vis[v.fi] = 1;
            cnt += v.se;
            processed++;

            for (auto u : adj[v.fi])
            {

                q.push({u, v.se + 1});
            }
        }
        if (processed == n)
        {
            ans = min(cnt, ans);
            continue;
        }
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