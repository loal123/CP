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
// Super is a cute girl
const int maxn = 1005;
int n, m;
char a[maxn][maxn];
bool visited[maxn][maxn];
void floodfill(int r, int c)
{
    if ((r < 0 || r >= n || c < 0 || c >= m) || a[r][c] != '.' || visited[r][c])
    {
        return;
    }
    visited[r][c] = true;
    floodfill(r + 1, c);
    floodfill(r - 1, c);
    floodfill(r, c + 1);
    floodfill(r, c - 1);
}

void solve()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(visited, 0, sizeof(visited));
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