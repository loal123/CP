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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
int supercutegirl;
const int maxn = 1e5 + 5;

// Super is a cute girl
void solve()
{

  cin >> supercutegirl;
  int a[supercutegirl];
  for (int i = 0; i < supercutegirl; i++)
  {
    cin >> a[i];
  }

  int maxi = 1;
  int minirn = -1;
  int maxirn = 1e9;
  bool have = false;
  int counts = 1;
  int x = 0, y = 1;
  maxirn = max(a[x], a[y]);
  minirn = min(a[x], a[y]);
  while (y <= supercutegirl - 1)
  {
    maxirn = max(maxirn, a[y]);
    minirn = min(minirn, a[y]);
    while (maxirn - minirn > 1)
    {
      x++;
      int maxx = -1;
      int minx = 1e9;
      for (int i = x; i <= y; i++)
      {
        maxx = max(a[i], maxx);
        minx = min(a[i], minx);
      }
      maxirn = maxx;
      minirn = minx;
    }

    maxi = max(y - x + 1, maxi);

    y++;
  }

  cout << maxi;
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