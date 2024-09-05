// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // typedef long double ld;
// // #define pii pair<int, int>
// // #define pll pair<ll, ll>
// // #define vi vector<int>
// // #define vl vector<ll>
// // #define fi first
// // #define se second
// // #define pb push_back
// // #define mp make_pair
// // #define all(v) v.begin(), v.end()
// // #define SZ(x) ((int)((x).size()))
// // #define pow2(x) ((ll)(x) * (x))
// // const ll mod = 1e9 + 7;
// // const int INF = 1e9 + 5;
// // const ll INFF = 1e18 + 5;
// // vector<vi> adj;
// // vi a;
// // int idx = 1;
// // // Super is the cutest girl
// // void dfs(int v, int e)
// // {
// //     a[v] = idx;
// //     for (auto u : adj[v])
// //     {
// //         if (u != e)
// //         {
// //             idx++;
// //             dfs(u, v);
// //         }
// //     }
// // }
// // void solve()
// // {

// //     // int n, k, q;
// //     // cin >> n >> k >> q;
// //     // adj = vector<vi>(n);
// //     // a = vi(n);
// //     // for (int i = 1; i <= n - 1; i++)
// //     // {
// //     //     int x;
// //     //     cin >> x;
// //     //     x--;
// //     //     adj[x].pb(i);
// //     //     adj[i].pb(x);
// //     // }
// //     // dfs(0, -1);
// //     // cout << "YA\n";

// //     // if (q == 1)
// //     // {
// //     //     for (auto i : a)
// //     //         cout << i << ' ';
// //     // }
// //     cout << "YA\n4 3 6 5 2 1 7";
// // }
// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(0);
// //     // freopen("input.txt","r",stdin);
// //     // freopen("output.txt","w",stdout);
// //     // int t; cin >> t; while(t--)
// //     solve();
// // }
// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>

// using namespace __gnu_pbds;
// using namespace std;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
// typedef long long ll;
// typedef long double ld;
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// #define vi vector<int>
// #define vl vector<ll>
// #define fi first
// #define se second
// #define pb push_back
// #define mp make_pair
// #define all(v) v.begin(), v.end()
// #define SZ(x) ((int)((x).size()))
// #define pow2(x) ((ll)(x) * (x))
// const ll mod = 1e9 + 7;
// const int INF = 1e9 + 5; // 998244353
// const ll INFF = 1e18 + 5;
// // Super is the cutest girl
// void solve()
// {
//     // int n, k, q;
//     // cin >> n >> k >> q;

//     // vi adj[n];
//     // vi val(n);
//     // for (int i = 1; i < n; i++)
//     // {
//     //     int x;
//     //     cin >> x;
//     //     x--;
//     //     adj[i].pb(x);
//     //     adj[x].pb(i);
//     // }
//     // int curr = 1;
//     // vi vis(n, -1);
//     // queue<int> qq;
//     // qq.push(0);
//     // while (!qq.empty())
//     // {
//     //     int v = qq.front();
//     //     qq.pop();
//     //     if (vis[v] != -1)
//     //         continue;
//     //     vis[v] = curr++;
//     //     for (auto u : adj[v])
//     //     {
//     //         qq.push(u);
//     //     }
//     // }

//     // cout << "YA\n";
//     // if (q == 1)
//     //     for (auto i : vis)
//     //         cout << i << " ";

//     ll n, k, q;
//     cin >> n >> k >> q;
//     vi p(n);
//     for (int i = 1; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         p[i] = x - 1;
//     }
//     if (k > (ll)n * (n - 1) / 2)
//     {
//         cout << "TIDAK\n";
//         return;
//     }
//     cout << "YA\n";
//     if (q == 1)
//     {
//         ll l = 1, r = n;
//         for (int i = 0; i < n; i++)
//         {
//             if (k - (n - i - 1) >= 0)
//             {
//                 k -= (n - i - 1);
//                 cout << r-- << " ";
//             }
//             else
//                 cout << l++ << " ";
//         }
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // int t; cin >> t; while(t--)
//     solve();
// }
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// #define vi vector<int>
// #define vl vector<ll>
// #define fi first
// #define se second
// #define pb push_back
// #define mp make_pair
// #define all(v) v.begin(), v.end()
// #define SZ(x) ((int)((x).size()))
// #define pow2(x) ((ll)(x) * (x))
// const ll mod = 1e9 + 7;
// const int INF = 1e9 + 5; // 998244353
// const ll INFF = 1e18 + 5;
// // Super is the cutest girl
// const int maxn = 1e5 + 5;
// vi adj[maxn];
// void solve()
// {
//     int n, k, q;
//     cin >> n >> k >> q;
//     for (int i = 1; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         adj[--x].pb(i);
//     }
//     vl v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     ll swaps = 0;
//     while (1)
//     {
//         bool has = 0;
//         for (int i = n - 1; i >= 0; i--)
//         {
//             pll xd = {v[i], -1};
//             for (auto u : adj[i])
//             {
//                 if (v[u] < xd.fi)
//                 {
//                     xd.fi = v[u];
//                     xd.se = u;
//                 }
//             }
//             if (xd.se != -1)
//             {
//                 has = 1;
//                 swaps++;
//                 swap(v[xd.se], v[i]);
//             }
//         }
//         if (!has)
//             break;
//     }
//     cout << swaps << '\n';
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // int t; cin >> t; while(t--)
//     solve();
// }
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
vi adj[maxn];
ll ans = 0;
vl height(maxn);
ll dfs(int v)
{
    ll curr = 0;
    for (auto u : adj[v])
    {
        curr = max(curr, dfs(u));
    }
    ans += curr;

    curr++;
    height[v] = curr;
    return height[v];
}
int yeah[maxn];
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;

    for (int i = 1; i < n; i++)
    {
        ll x;
        cin >> x;
        adj[x - 1].pb(i);
    }
    dfs(0);
    for (int i = 0; i < n; i++)
    {
        cout << height[i] << '\n';
    }
    cout << (k <= ans ? "YA\n" : "TIDAK\n");
    if (k > ans)
        return;
    if (q == 1)
    {
        
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