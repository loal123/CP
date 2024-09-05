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
// // const int INF = 1e9 + 5; // 998244353
// // const ll INFF = 1e18 + 5;
// // // Super is the cutest girl
// // const int maxn = 1e5 + 5;
// // vi adj[maxn];
// // vector<bool> vis(maxn, 0);
// // int sizes[maxn];
// // int p[maxn];
// // int one = 0, two = 0;
// // int find_par(int v)
// // {
// //     if (p[v] == v)
// //         return v;
// //     return p[v] = find_par(p[v]);
// // }
// // void mergesets(int a, int b)
// // {
// //     a = find_par(a);
// //     b = find_par(b);
// //     if (a != b)
// //     {
// //         if (sizes[b] > sizes[a])
// //             swap(a, b);
// //         if (sizes[a] == 2)
// //             two--;
// //         else if (sizes[a] == 1)
// //             one--;
// //         sizes[a] += sizes[b];

// //         if (sizes[a] == 2)
// //             two++;

// //         if (sizes[b] == 1)
// //             one--;
// //         else if (sizes[b] == 2)
// //             two--;

// //         p[b] = a;
// //     }
// // }
// // vector<vl> vdream;
// // vl dream;
// // int sz = 0;
// // void dfs(int v)
// // {
// //     if (vis[v])
// //         return;

// //     vis[v] = 1;
// //     sz++;
// //     dream.pb(v);

// //     for (auto u : adj[v])
// //         dfs(u);
// // }
// // void solve()
// // {
// //     int n, m;
// //     cin >> n >> m;
// //     for (int i = 0; i < m; i++)
// //     {
// //         int a, b;
// //         cin >> a >> b;
// //         adj[--a].pb(--b);
// //         adj[b].pb(a);
// //     }

// //     for (int i = 0; i < n; i++)
// //     {
// //         if (vis[i])
// //             continue;
// //         dfs(i);
// //         if (sz == 3)
// //             vdream.pb(dream);
// //         dream.clear();
// //         sz = 0;
// //     }
// //     ll total = (ll)n * (n + 1) * (n + 2) / 6;
// //     if (vdream.empty())
// //         cout << total;
// //     else
// //     {
// //         ll curr = 0;
// //         for (auto i : vdream)
// //         {
// //             ll l = INF;
// //             ll r = -1;
// //             for (auto j : i)
// //             {
// //                 l = min(l, j);
// //                 r = max(r, j);
// //             }

// //             curr += (ll)(l + 1) * (n - r) * 3;
// //         }
// //         cout << total - curr << '\n';
// //     }
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
// vector<bool> vis(maxn, 0);
// int sizes[maxn];
// int p[maxn];
// int one = 0, two = 0;
// int find_par(int v)
// {
//     if (p[v] == v)
//         return v;
//     return p[v] = find_par(p[v]);
// }
// void mergesets(int a, int b)
// {
//     a = find_par(a);
//     b = find_par(b);
//     if (a != b)
//     {
//         if (sizes[b] > sizes[a])
//             swap(a, b);
//         if (sizes[a] == 2)
//             two--;
//         else if (sizes[a] == 1)
//             one--;
//         sizes[a] += sizes[b];

//         if (sizes[a] == 2)
//             two++;

//         if (sizes[b] == 1)
//             one--;
//         else if (sizes[b] == 2)
//             two--;

//         p[b] = a;
//     }
// }
// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[--a].pb(--b);
//         adj[b].pb(a);
//     }
//     ll ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         one = 0, two = 0;
//         for (int j = i; j < n; j++)
//         {
//             p[j] = j;
//             sizes[j] = 1;
//         }
//         for (int j = i; j < n; j++)
//         {
//             one++;
//             for (auto xd : adj[j])
//             {
//                 if (xd < j && xd >= i)
//                     mergesets(xd, j);
//             }
//             cout << i << " " << j << " " << one + two * 2 << '\n';
//             ans += one + two * 2;
//         }
//     }
//     cout << ans << '\n';

//     // given a line graph, instead of
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
// full solve
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
const int maxn = 2e5 + 5;
vi adj[maxn];
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pii> v(m);
    vector<pii> a(n);
    vector<pii> lr(m);
    for (int i = 0; i < n; i++)
    {
        a[i] = {-1, n};
        adj[i].pb(-1);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> v[i].fi >> v[i].se;
        v[i].fi--;
        v[i].se--;
        adj[v[i].fi].pb(v[i].se);
        adj[v[i].se].pb(v[i].fi);
        if (v[i].fi > v[i].se)
            swap(v[i].fi, v[i].se);
        lr[i].fi = v[i].fi;
        lr[i].se = v[i].se;
        if (v[i].fi < v[i].se)
        {
            a[v[i].se].fi = max(a[v[i].se].fi, v[i].fi);
            a[v[i].fi].se = min(a[v[i].fi].se, v[i].se);
        }
        // a[].fi = l
        // a[].se = r
        else
        {
            a[v[i].se].se = min(a[v[i].se].se, v[i].fi);
            a[v[i].fi].fi = max(a[v[i].fi].fi, v[i].se);
        }
    }
    for (int i = 0; i < m; i++)
    {
        lr[i].fi = a[v[i].fi].fi;
        lr[i].se = a[v[i].se].se;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        adj[i].pb(n);
        if (!adj[i].empty())
            sort(all(adj[i]));
    }
    for (int i = 0; i < n; i++)
    {
        ll l = i - a[i].fi;
        ll r = a[i].se - i;
        ans += (l * r);
    }
    for (int i = 0; i < m; i++)
    {
        ll left = v[i].fi;
        ll right = v[i].se;
        ll leftpos = lower_bound(all(adj[left]), left) - adj[left].begin();
        ll rightpos = lower_bound(all(adj[right]), right) - adj[right].begin();
        ll l1, l2, r1, r2;
        l1 = adj[left][leftpos - 1];
        if (adj[left][leftpos] == right)
            r1 = adj[left][leftpos + 1];
        else
            r1 = adj[left][leftpos];

        if (adj[right][rightpos - 1] == left)
        {
            l2 = adj[right][rightpos - 2];
        }
        else
            l2 = adj[right][rightpos - 1];
        r2 = adj[right][rightpos];
        if (r1 < right || l2 > left)
            continue;
        ll l = v[i].fi - max(l1, l2);
        ll r = min(r1, r2) - v[i].se;
        ans += (l * r) * 2;
    }
    cout << ans << '\n';
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
