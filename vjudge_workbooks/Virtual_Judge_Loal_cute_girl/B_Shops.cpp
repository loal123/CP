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
#define int long long
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
const int maxn = 5e5 + 5;
vector<pll> adj[maxn];
vector<bool> vis(maxn, 0);
int parent[maxn];
int sizes[maxn];
vector<pll> mstadj[maxn];
vector<char> ans(maxn);
ll shortestpath = -1;
void dfs(int node, int prev, bool r)
{
  if (r)
    ans[node] = 'B';
  else
    ans[node] = 'D';
  ll mini = INF;
  for (auto to : mstadj[node])
  {
    mini = min(mini, to.se);
    if (to.fi != prev)
    {
      dfs(to.fi, node, !r);
    }
  }
  shortestpath = max(shortestpath, mini);
}

int find_set(int v)
{
  if (v == parent[v])
  {
    return v;
  }
  return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b, int w)
{
  int apar = find_set(a);
  int bpar = find_set(b);
  if (apar != bpar)
  {
    mstadj[a].pb({b, w});
    mstadj[b].pb({a, w});

    if (sizes[apar] < sizes[bpar])
      swap(apar, bpar);
    parent[bpar] = apar;
    sizes[apar] += sizes[bpar];
  }
}
void solve()
{
  int n, m;
  cin >> n >> m;
  vector<pair<int, pii>> v(m);
  for (int i = 0; i < n; i++)
  {
    parent[i] = i;
    sizes[i] = 1;
  }
  for (int i = 0; i < m; i++)
  {

    ll a, b, w;
    cin >> a >> b >> w;
    adj[--a].pb({--b, w});
    adj[b].pb({a, w});
    v[i].fi = w;
    v[i].se.fi = a;
    v[i].se.se = b;
  }
  sort(all(v));

  for (auto i : v)
  {
    union_sets(i.se.fi, i.se.se, i.fi);
  }
  dfs(0, -1, 1);
  cout << shortestpath << '\n';

  for (int i = 0; i < n; i++)
  {
    cout << ans[i];
  }
}
signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  // int t; cin >> t; while(t--)
  solve();
}