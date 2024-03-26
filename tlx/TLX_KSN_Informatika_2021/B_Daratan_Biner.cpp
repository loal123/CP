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

// Super is the cutest girl
vl adj[maxn];
bool vis[maxn];
int p[maxn];
int sizes[maxn];

ll ans[maxn];
ll a[maxn], b[maxn];
void make_set(int v)
{
    p[v] = v;
    sizes[v] = 1;
}
int find_set(int v)
{
    if (p[v] == v)
        return v;
    return p[v] = find_set(p[v]);
}
void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sizes[a] < sizes[b])
        {
            swap(a, b);
        }
        p[b] = a;
        sizes[a] += sizes[b];
    }
}
void dfs(int u)
{
    if (vis[u])
        return;
    vis[u] = 1;

    for (auto i : adj[u])
    {
        dfs(i);
    }
}
void setback(int n)
{
    for (int i = 0; i < n; i++)
    {
        vis[i] = false;
    }
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        make_set(i);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] ^ a[j]) > max(a[i], a[j]))
            {
                union_set(i, j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        setback(n);

        
        dfs(i);
        cout << ans << '\n';
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