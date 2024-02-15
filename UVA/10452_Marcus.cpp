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
// Super is the cutest girl
const int maxn = 1000;
char a[maxn][maxn];
string iehova = "IEHOVA#";
int n, m;
void dfs(int i, int j, int idx)
{
    if (idx == 7)
        return;
    if (a[i - 1][j] == iehova[idx])
    {
        cout << "forth";
        if (idx < 6)
            cout << " ";
        dfs(i - 1, j, idx + 1);
    }
    if (j > 0)
    {
        if (a[i][j - 1] == iehova[idx])
        {
            cout << "left";
            if (idx < 6)
                cout << " ";
            dfs(i, j - 1, idx + 1);
        }
    }
    if (j < m - 1)
    {
        if (a[i][j + 1] == iehova[idx])
        {
            cout << "right";
            if (idx < 6)
                cout << " ";
            dfs(i, j + 1, idx + 1);
        }
    }
}
void solve()
{

    cin >> n >> m;
    int sx;
    int sy;
    int ex;
    int ey;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '@')
            {
                sx = i;
                sy = j;
            }
            if (a[i][j] == '#')
            {
                ex = i;
                ey = j;
            }
        }
    }
    dfs(sx, sy, 0);
    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}