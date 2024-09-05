// subtask1 -3
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
// const int maxn = 1e6;
// vi p(maxn);
// vi sizes(maxn);
// vl v(maxn);
// set<int> has;
// ll ans = 0;
// int curr = 0;
// vector<pii> ansl;
// int findp(int v)
// {
//     if (v == p[v])
//         return v;
//     return p[v] = findp(p[v]);
// }
// void dsu(int a, int b, int idx)
// {
//     int oria = a;
//     int orib = b;
//     a = findp(a);
//     b = findp(b);
//     if (a == b)
//         return;
//     if (sizes[b] > sizes[a])
//         swap(a, b);
//     ans += v[oria] * v[orib];
//     has.insert(idx);
//     ansl.pb({oria, orib});
//     curr++;
//     sizes[a] += sizes[b];
//     p[b] = a;
// }
// void solve()
// {
//     int n, m;
//     cin >> n >> m;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         sizes[i] = 1;
//         p[i] = i;
//     }
//     vector<pair<ll, pii>> edges;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             edges.pb({(ll)v[i] * v[j], {i, j}});
//         }
//     }
//     sort(all(edges));
//     int sz = SZ(edges);
//     for (int i = 0; i < sz; i++)
//     {
//         dsu(edges[i].se.fi, edges[i].se.se, i);
//     }
//     int idx = 0;

//     while (curr < m)
//     {
//         if (has.count(idx))
//         {
//             idx++;
//             continue;
//         }
//         ans += edges[idx].fi;
//         ansl.pb({edges[idx].se.fi, edges[idx].se.se});
//         curr++;
//         idx++;
//     }
//     cout << ans << '\n';
//     for (auto i : ansl)
//         cout << i.fi + 1 << " " << i.se + 1 << '\n';
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
// subtask 4

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
void solve()
{
    int n, m;
    cin >> n >> m;
    int curr = 0;
    vector<pll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi;
        v[i].se = i;
    }
    sort(all(v));
    ll ans;
    vector<pii> ansl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (curr == m)
            {
                cout << ans << '\n';
                for (auto i : ansl)
                {
                    cout << i.fi << " " << i.se << '\n';
                }
                return;
            }
            ans += v[i].fi * v[j].fi;
            ansl.pb({v[i].se + 1, v[j].se + 1});
            curr++;
        }
    }
    cout << ans << '\n';
    for (auto i : ansl)
    {
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