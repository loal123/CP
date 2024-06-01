#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstring>
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
char a[40][40][40];
bool vis[40][40][40];
int dist[40][40][40];
int dx[6] = {0, 0, 1, 0, -1, 0};
int dy[6] = {0, 0, 0, 1, 0, -1};
int dz[6] = {1, -1, 0, 0, 0, 0};
int l, r, c;
bool path(int z, int x, int y)
{
  if (z < 0 || z >= l || x < 0 || x >= r || y < 0 || y >= c)
    return false;
  if (a[z][x][y] != '#' && !vis[z][x][y])
  {

    return true;
  }

  return false;
}

struct stuff
{
  int z, x, y;
};
bool death = 1;
void solve()
{
  memset(vis, 0, sizeof(vis));

  cin >> l >> r >> c;
  if (l == 0 && r == 0 && c == 0)
  {

    death = 0;
    return;
  }
  stuff starting;
  stuff ending;
  for (int level = 0; level < l; level++)
  {
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        cin >> a[level][i][j];
        if (a[level][i][j] == 'S')
        {
          starting.z = level;
          starting.x = i;
          starting.y = j;
        }
        if (a[level][i][j] == 'E')
        {
          ending.z = level;
          ending.x = i;
          ending.y = j;
        }

        dist[level][i][j] = INF;
      }
    }
  }
  queue<stuff> q;

  q.push(starting);
  dist[starting.z][starting.x][starting.y] = 0;
  vis[starting.z][starting.x][starting.y] = 1;

  while (!q.empty())
  {
    stuff curr = q.front();
    q.pop();
    for (int i = 0; i < 6; i++)
    {
      int adjz = curr.z + dz[i];
      int adjx = curr.x + dx[i];
      int adjy = curr.y + dy[i];
      if (path(adjz, adjx, adjy))
      {
        stuff idk;
        idk.z = adjz;
        idk.x = adjx;
        idk.y = adjy;
        q.push(idk);
        vis[adjz][adjx][adjy] = 1;
        dist[adjz][adjx][adjy] = min(dist[adjz][adjx][adjy], dist[curr.z][curr.x][curr.y] + 1);
      }
    }
  }
  if (dist[ending.z][ending.x][ending.y] == INF)
  {
    cout << "Trapped!\n";
  }
  else
    cout << "Escaped in " << dist[ending.z][ending.x][ending.y] << " " << "minute(s).\n";
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  // int t; cin >> t; while(t--)
  while (death)
    solve();
}