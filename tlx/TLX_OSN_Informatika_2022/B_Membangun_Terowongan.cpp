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
const int maxn = 200;
int sizes[maxn];
int p[maxn];
vector<pii> ans;
int fpar(int v)
{
    if (v == p[v])
        return v;
    return p[v] = fpar(p[v]);
}
void dsu(int x, int y)
{
    int a = fpar(x);
    int b = fpar(y);
    if (a != b)
    {
        ans.pb({x + 1, y + 1});
        if (sizes[b] > sizes[a])
            swap(a, b);
        sizes[a] += sizes[b];
        p[b] = a;
    }
}
void solve()
{

    int n;
    cin >> n;
    // vector<pair<ll, pii>> v;
    // for (int i = 0; i < n; i++)
    // {
    //     p[i] = i;
    //     sizes[i] = 1;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         cout << "? ";
    //         for (int k = 0; k < n; k++)
    //         {
    //             if (k == i)
    //                 cout << 1 << " ";
    //             else if (k == j)
    //                 cout << 2 << " ";
    //             else
    //                 cout << 0 << " ";
    //         }
    //         cout << endl;
    //         ll x;
    //         cin >> x;
    //         v.pb({x, {i, j}});
    //     }
    // }
    // sort(all(v));
    // for (auto i : v)
    // {
    //     dsu(i.se.fi, i.se.se);
    // }
    // cout << "! " << SZ(ans) << endl;
    // for (auto i : ans)
    //     cout << i.fi << ' ' << i.se << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "? ";
        for (int j = 0; j < i; j++)
            cout << 0 << ' ';
        cout << 1 << ' ';
        for (int j = i + 1; j < n; j++)
            cout << 2 << " ";
        cout << endl;
        int x;
        cin >> x;
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