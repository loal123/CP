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
vector<vi> adj;
vi a;
int idx = 1;
// Super is the cutest girl
void dfs(int v, int e)
{
    a[v] = idx;
    for (auto u : adj[v])
    {
        if (u != e)
        {
            idx++;
            dfs(u, v);
        }
    }
}
void solve()
{

    // int n, k, q;
    // cin >> n >> k >> q;
    // adj = vector<vi>(n);
    // a = vi(n);
    // for (int i = 1; i <= n - 1; i++)
    // {
    //     int x;
    //     cin >> x;
    //     x--;
    //     adj[x].pb(i);
    //     adj[i].pb(x);
    // }
    // dfs(0, -1);
    // cout << "YA\n";

    // if (q == 1)
    // {
    //     for (auto i : a)
    //         cout << i << ' ';
    // }
    cout << "TIDAK\n";
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