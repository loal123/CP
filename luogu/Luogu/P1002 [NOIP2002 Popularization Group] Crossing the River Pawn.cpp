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
const int maxn = 100;
int a[maxn][maxn];
bool c[maxn][maxn];
int n, m, hx, hy;
int dx[3] = {1, 0, 1};
int dy[3] = {0, 1, 1};
bool vis[maxn][maxn];

// Super is the cutest girl

void solve()
{
    memset(c, 0, sizeof(c));
    memset(vis, 0, sizeof(vis));
    cin >> n >> m >> hx >> hy;
    n += 2;
    m += 2;
    hx += 2;
    hy += 2;
    memset(a, 0, sizeof(a));

    a[2][1] = 1;

    int ax[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    int ay[8] = {-2, -1, 1, 2, 2, -1, 1, -2};
    c[hx][hy] = 1;
    for (int i = 0; i < 8; i++)
    {

        c[hx + ax[i]][hy + ay[i]] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            if (c[i][j])
                continue;
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }

    cout << a[n][m] << '\n';
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