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
bool vis[2][2];
char a[2][2];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
void dfs(int i, int j)
{
    if (i < 0 || i == 2 || j < 0 || j == 2)
        return;

    if (vis[i][j])
        return;

    if (a[i][j] == '.')
        return;

    vis[i][j] = 1;

    for (int z = 0; z < 4; z++)
    {
        dfs(i + dx[z], j + dy[z]);
    }
}
// Super is the cutest girl
void solve()
{
    memset(vis, 0, sizeof(vis));
    int posx = -1, posy = -1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '#')
            {
                posx = i;
                posy = j;
            }
        }
    }
    if (posx == -1)
    {
        cout << "No";
        return;
    }
    dfs(posx, posy);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            if (a[i][j] == '#')
            {
                if (!vis[i][j])
                {
                    cout << "No";
                    return;
                }
            }
        }
    }
    cout << "Yes";
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