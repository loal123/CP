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
int parent[maxn];
int sizes[maxn];
void make_set(int v)
{
    parent[v] = v;
    sizes[v] = 1;
}
int find_set(int v)
{
    if (parent[v] == v)
        return v;
    else
        return parent[v] = find_set(parent[v]);
}
void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sizes[a] < sizes[b])
            swap(a, b);
        parent[b] = a;
        sizes[a] += sizes[b];
    }
}
// Super is the cutest girl
void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    bool vis[n + 1];
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        make_set(i);
    }
    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        union_set(x, y);
    }
    int edge = 0;
    ll counts = 0;
    vector<pair<int, pii>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            v.pb(mp(h[i] + h[j], mp(i, j)));
        }
    }
    sort(all(v));
    vector<pii> nya;
    for (auto i : v)
    {
        int x = find_set(i.se.fi);
        int y = find_set(i.se.se);
        if (x != y && !vis[i.se.fi] && !vis[i.se.se])
        {
            vis[i.se.fi] = true;
            vis[i.se.se] = true;
            counts += i.fi;
            union_set(x, y);
            edge++;
            if (q == 1)
            {
                nya.pb(mp(i.se.fi + 1, i.se.se + 1));
            }
        }
    }
    if (m + edge < n - 1)
        cout << -1;
    else if (q == 0)
    {
        cout << counts;
    }
    else
    {
        cout << counts << '\n';
        cout << edge << '\n';
        for (auto i : nya)
            cout << i.fi << " " << i.se << '\n';
    }
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