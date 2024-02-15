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
const int maxn = 1e5 + 5;
vi adj[maxn];
bool vis[maxn];
int p[maxn];
int num[maxn];
// Super is the cutest girl
void dfs(int s)
{
    for (auto i : adj[s])
    {
        if (num[s] + 1 > num[i])
        {
            num[i] = num[s] + 1;
            p[i] = s;
        }
        dfs(i);
    }
}
void solve()
{
    memset(p, -1, sizeof(p));
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
    }
    memset(num, 0, sizeof(num));
    num[0] = 1;
    dfs(0);

    if (p[n - 1] == -1)
    {
        cout << "IMPOSSIBLE";
        return;
    }
    int idx = n - 1;
    vi ordering;
    ordering.pb(n - 1);
    while (p[idx] != -1)
    {
        ordering.pb(p[idx]);
        idx = p[idx];
    }
    cout << num[n - 1] << '\n';
    reverse(all(ordering));
    for (auto i : ordering)
        cout << i + 1 << " ";
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