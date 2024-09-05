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
int n, m, k;
vi color;
vector<vi> adj;
vl cnt(1 << 5);
vector<bool> vis;

void solve()
{

    cin >> n >> m >> k;
    color = vi(n);
    adj = vector<vi>(n);
    vis = vector<bool>(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> color[i];
        color[i]--;
    }
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
    }
    cnt[0] = 1;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(i);

        while (!q.empty())
        {
            int v = q.front();
            int ndc = color[v];
            q.pop();
            if (vis[v])
                continue;

            for (int i = 0; i < (1 << k); i++)
            {
                int curr = (1 << ndc);
                if ((curr)&i)
                    continue;
                cnt[i | curr] += cnt[i];
            }
            for (auto u : adj[v])
            {
                q.push(u);
            }
            vis[v] = 1;
        }
    }
    ll ans = 0;
    for (int i = 1; i < (1 << k); i++)
    {
        ans += cnt[i];
    }

    cout << ans * 2 << '\n';
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