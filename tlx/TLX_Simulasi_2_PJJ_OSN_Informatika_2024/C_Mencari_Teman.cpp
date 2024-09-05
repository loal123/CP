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
int currx, curry, destx, desty;
int n, m;
const int maxn = 1005;
char a[maxn][maxn];
vector<vi> dist(maxn, vi(maxn, 0));
vector<vi> distc(maxn, vi(maxn, INF));
vector<vi> col(maxn);
vector<vi> row(maxn);
vector<vi> torow(maxn);
vector<vi> tocol(maxn);
vector<vector<bool>> vis(maxn, vector<bool>(maxn, 0));
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
ll ans = INF;
void flood(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= n)
        return;
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        row[i].pb(0);
        torow[i].pb(-1);
    }
    for (int i = 0; i < m; i++)
    {
        col[i].pb(0);
        tocol[i].pb(-1);
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            cin >> a[i][j];
            if (a[i][j] == 'C')
            {
                destx = i;
                desty = j;
            }
            if (a[i][j] == 'S')
            {
                currx = i;
                curry = j;
            }
            if (a[i][j] == '#')
            {
                torow[i].pb(j);
                tocol[j].pb(i);
                if (i - 1 >= 0 && j != 0 && j != m - 1)
                {
                    if (a[i - 1][j] != '#')
                        row[i - 1].pb(j);
                    {
                        col[j].pb(i - 1);
                    }
                }
                if (i + 1 < n && j != 0 && j != m - 1)
                {
                    if (a[i + 1][j] != '#')
                    {
                        row[i + 1].pb(j);
                        col[j].pb(i + 1);
                    }
                }
                if (j - 1 >= 0 && i != 0 && i != n - 1)
                {
                    if (a[i][j - 1] != '#')
                    {
                        col[j - 1].pb(i);
                        row[i].pb(j - 1);
                    }
                }
                if (j + 1 < m && i != 0 && i != n - 1)
                {
                    if (a[i][j + 1] != '#')
                    {
                        col[j + 1].pb(i);
                        row[i].pb(j + 1);
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        row[i].pb(m - 1);
        torow[i].pb(m);
        sort(all(row[i]));
        sort(all(torow[i]));
    }
    for (int i = 0; i < m; i++)
    {
        col[i].pb(n - 1);
        tocol[i].pb(n);
        sort(all(col[i]));
        sort(all(tocol[i]));
    }
    queue<pii> q;
    q.push({destx, desty});
    while (!q.empty())
    {
        int i = q.front().fi;
        int j = q.front().se;
        q.pop();

        if (vis[i][j])
            continue;

        if (a[i][j] == '#')
            continue;
        vis[i][j] = 1;

        for (int dir = 0; dir < 4; dir++)
        {
            int x = i + dx[dir];
            int y = j + dy[dir];

            if (x < 0 || x >= n || y < 0 || y >= n)
                continue;
            if (vis[x][y])
                continue;

            dist[x][y] = dist[i][j] + 1;
            q.push({x, y});
        }
    }
    q.push({currx, curry});
    distc[currx][curry] = 0;
    vis = vector<vector<bool>>(maxn, vector<bool>(maxn, 0));
    while (!q.empty())
    {
        int i = q.front().fi;
        int j = q.front().se;
        q.pop();

        if (vis[i][j])
            continue;

        if (a[i][j] == '#')
            continue;
        vis[i][j] = 1;
        int ytp = lower_bound(all(col[j]), i) - col[j].begin();
        int xtp = lower_bound(all(row[i]), j) - row[i].begin();
        int tytp = lower_bound(all(tocol[j]), i) - tocol[j].begin();
        int txtp = lower_bound(all(torow[i]), j) - torow[i].begin();
        vi dirtps;
        int right, left, up, down;
        int tr, tl, tu, td;
        tr = torow[i][txtp] - 1;
        tl = torow[i][txtp - 1] + 1;
        tu = tocol[j][tytp - 1] + 1;
        td = tocol[j][tytp] - 1;
        if (xtp == j)
        {
            right = row[i][xtp];
            left = row[i][xtp];
        }
        else
        {
            right = row[i][xtp];
            left = row[i][xtp - 1];
        }
        if (ytp == i)
        {
            up = col[j][ytp];
            down = col[j][ytp];
        }
        else
        {
            up = col[j][ytp - 1];
            down = col[j][ytp];
        }

        distc[i][tr] = min(distc[i][j] + (min({abs(j - left), abs(i - up), abs(down - i)})) + 1, distc[i][tr]);
        distc[i][tl] = min(distc[i][j] + (min({abs(right - j), abs(i - up), abs(down - i)})) + 1, distc[i][tl]);
        distc[tu][j] = min(distc[i][j] + (min({abs(j - left), abs(right - j), abs(down - i)})) + 1, distc[tu][j]);
        distc[td][j] = min(distc[i][j] + (min({abs(j - left), abs(right - j), abs(i - up)})) + 1, distc[td][j]);

        for (int dir = 0; dir < 4; dir++)
        {
            int x = i + dx[dir];
            int y = j + dy[dir];

            if (x < 0 || x >= n || y < 0 || y >= m)
                continue;

            distc[x][y] = min(distc[x][y], distc[i][j] + 1);

            q.push({x, y});
        }
    }
    // now we find shortest dist from S, tp destintation = dist[curr] (from S) + dist[curr][wall departure] + 1 + dist[destination] (from C)

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cout << distc[i][j] << " ";
        }
        cout << endl;
    }
    // cout << distc[destx][desty];
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