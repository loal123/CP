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
vector<vi> adj;
const int maxn = 2e5 + 5;
vector<bool> vis;
vi sizes(maxn, 1);
vi p(maxn);
vi ans;
vi path;
int fp(int x)
{
    if (p[x] == x)
    {
        return x;
    }
    return p[x] = fp(p[x]);
}
bool ms(int a, int b, int w)
{
    a = fp(a);
    b = fp(b);

    if (a != b)
    {

        if (sizes[b] > sizes[a])
            swap(a, b);

        p[b] = a;
        sizes[a] += sizes[b];
        return true;
    }
    return false;
}
bool found = false;
void dfs(int v, int l, int r)
{
    path.pb(v);
    if (v == r)
    {
        ans = path;
        found = 1;
        return;
    }
    for (auto u : adj[v])
    {
        if (u != l)
            dfs(u, v, r);
        if (found)
            return;
    }
    path.pop_back();
}

void solve()
{
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int>>(n, vector<int>());
    vis = vector<bool>(n, 0);
    vector<pair<int, pii>> v(m);
    for (int i = 0; i < n; i++)
    {
        sizes[i] = 1;
        p[i] = i;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> v[i].se.fi >> v[i].se.se >> v[i].fi;
        v[i].se.fi--;
        v[i].se.se--;
    }
    sort(v.rbegin(), v.rend());
    pii yeah;
    int best;
    for (auto i : v)
    {
        if (!ms(i.se.fi, i.se.se, i.fi))
        {
            best = i.fi;
            yeah = i.se;
        }
        else
        {
            adj[i.se.fi].pb(i.se.se);
            adj[i.se.se].pb(i.se.fi);
        }
    }
    found = 0;
    path.resize(0);
    dfs(yeah.fi, -1, yeah.se);
    cout << best << ' ' << SZ(ans) << '\n';
    for (auto i : ans)
        cout << i + 1 << " ";

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