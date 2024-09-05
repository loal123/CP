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
// vi find;
// int n, k, d;
// string s;
// vi pos;
// vector<vi> paths;
// void searchx(vi curr, int x, int cnt)
// {
//     curr.pb(x);
//     if (cnt == k)
//         paths.pb(curr);
//     if (x >= n)
//         return;
//     for (int i = x + 1 + d; i < n; i++)
//     {
//         if (s[i] == 'o')
//             searchx(curr, i, cnt + 1);
//     }
// }
// void solve()
// {

//     cin >> n >> k >> d;

//     cin >> s;
//     vi pos;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == 'o')
//             pos.pb(i);
//     }
//     vl cnt(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == 'o')
//             searchx({}, i, 1);
//     }
//     int needed = SZ(paths);
//     for (auto i : paths)
//     {
//         for (auto j : i)
//             cnt[j]++;
//     }
//     vi ans;
//     for (int i = 0; i < n; i++)
//     {
//         if (cnt[i] == needed)
//             ans.pb(i + 1);
//     }
//     if (SZ(ans) == 0)
//         cout << -1;
//     else
//     {
//         for (auto i : ans)
//             cout << i << '\n';
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
void solve()
{
    int n, k, d;
    string s;
    cin >> n >> k >> d;

    cin >> s;
    vi pos;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
            pos.pb(i);
    }
    int curr = 1;
    vi path1, path2;
    path1.pb(pos[0]);
    int currpos = pos[0];
    while (curr < k)
    {
        int lpos = lower_bound(all(pos), currpos + 1 + d) - pos.begin();
        currpos = pos[lpos];
        path1.pb(currpos);
        curr++;
    }
    for (auto &i : pos)
        i *= -1;
    reverse(all(pos));
    path2.pb(-pos[0]);
    curr = 1;
    currpos = pos[0];
    while (curr < k)
    {
        int lpos = lower_bound(all(pos), currpos + 1 + d) - pos.begin();
        currpos = pos[lpos];
        path2.pb(-currpos);
        curr++;
    }
    reverse(all(path2));
    vi ans;
    for (int i = 0; i < k; i++)
    {
        if (path1[i] == path2[i])
        {
            ans.pb(path1[i] + 1);
        }
    }
    if (SZ(ans) == 0)
    {
        cout << -1;
    }
    else
    {
        for (auto i : ans)
            cout << i << '\n';
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