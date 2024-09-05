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
// vector<bool> vis(1 << 20, 0);
// const int maxn = 1e5 + 5;
// vi adj[maxn];
// void solve()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[--a].pb(--b);
//         adj[b].pb(a);
//     }
//     vi dp(n + 1, INF);
//     queue<int> q;
//     int curr = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         if (x)
//         {
//             curr |= (1 << i);
//         }
//     }
//     q.push({curr});
//     int ops = 0;
//     while (!q.empty())
//     {
//         int z = q.front();
//         for (int i = 0; i < n; i++)
//         {
//             int xd = curr;
//             xd ^= (1 << i);

//             for (auto j : adj[i])
//             {
//                 xd |= (1 << j);
//             }
//             if (dp[xd] != INF)
//             {
//                 dp[xd] = dp[z] + 1;
//             }
//         }
//     }
//     if (dp[0] == INFF)
//     {
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
vector<bool> on(maxn);
int dp[maxn][2][2];
// dp[node][on/off][toggled]
void dfs(int v, int l)
{
    if (on[v])
    {
        dp[v][1][0] = 1;
        dp[v][0][1] = 0;
    }
    for (auto child : adj[v])
    {
        dfs(child, v);
    }
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        dp[i][0][0] = INF;
        dp[i][0][1] = INF;

        dp[i][1][0] = INF;
        dp[i][1][1] = INF;
    }
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    for (int i = 0; i < n; i++)
    {
        int can;
        cin >> can;
        if (can)
            on[i] = 1;
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