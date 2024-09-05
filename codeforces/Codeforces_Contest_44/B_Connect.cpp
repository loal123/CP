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
vector<pii> c1;
vector<pii> c2;
bool vis[55][55];
char a[55][55];
int n;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
void dfs(int i, int j, bool one)
{
    if (i < 0 || i >= n || j < 0 || j >= n)
        return;
    if (vis[i][j] || a[i][j] == '1')
        return;
    vis[i][j] = 1;
    if (one)
        c1.pb({i, j});
    else
        c2.pb({i, j});
    for (int dir = 0; dir < 4; dir++)
    {
        dfs(i + dx[dir], j + dy[dir], one);
    }
}
void solve()
{

    cin >> n;
    int i1, j1;
    cin >> i1 >> j1;
    i1--;
    j1--;
    int i2, j2;
    cin >> i2 >> j2;
    i2--;
    j2--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    dfs(i1, j1, 1);
    dfs(i2, j2, 0);

    if (SZ(c2) == 0)
    {
        cout << 0 << '\n';
        return;
    }
    ll mini = INF;
    for (auto i : c1)
    {
        for (auto j : c2)
        {
            mini = min(mini, pow2(i.fi - j.fi) + pow2(i.se - j.se));
        }
    }
    cout << mini << '\n';
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