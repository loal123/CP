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
// Super is a cute girl
const int maxn = 1e5 + 5;
vi adj[maxn];
bool vis[maxn];
ll a[maxn];
void dfs(int s, ll &mini)
{
    if (vis[s])
        return;
    vis[s] = true;
    mini = min(mini, a[s]);
    for (auto i : adj[s])
    {
        dfs(i, mini);
    }
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    ll b[m];
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b, b + m);
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    ll ans = 0;
    int curr = 0;
    bool can = true;
    vl total;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            ll mini = INFF;

            dfs(i, mini);

            total.pb(mini);
            curr++;
        }
    }
    sort(all(total));

    if (total.size() <= m)
    {
        int left = 0, right = total.size() - 1;
        while (left < total.size() && right >= 0)
        {
            ans += total[left] * b[right];
            left++;
            right--;
        }
        cout << ans;
    }
    else
        cout << -1;
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