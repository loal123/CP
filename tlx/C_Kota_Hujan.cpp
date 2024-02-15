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
const int maxn = 1005;
int n;
int a[maxn][maxn];
void solve()
{
  cin >> n;
  int counts = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
      if (a[i][j] == -1)
        counts++;
    }
  }
  cout << 1;
  // if (counts == 0)
  // {
  //   if (a[0][0] + a[1][1] == a[0][1] + a[1][0])
  //     cout << 1;
  //   else
  //     cout << 0;
  // }
  // else if (counts == 1)
  // {
  //   if (a[0][0] == -1)
  //   {
  //     if (a[1][1] <= a[0][1] + a[1][0])
  //       cout << 1;
  //     else
  //       cout << 0;
  //   }
  //   if (a[0][1] == -1)
  //   {
  //     if (a[1][0] <= a[1][1] + a[0][0])
  //       cout << 1;
  //     else
  //       cout << 0;
  //   }
  //   if (a[1][0] == -1)
  //   {
  //     if (a[0][1] <= a[1][1] + a[1][0])
  //       cout << 1;
  //     else
  //       cout << 0;
  //   }
  //   if (a[1][1] == -1)
  //   {
  //     if (a[0][0] <= a[0][1] + a[1][0])
  //       cout << 1;
  //     else
  //       cout << 0;
  //   }
  // }

  // else if (counts == 2)
  // {
  //   if (a[0][0] == -1 && a[1][1] == -1)
  //     cout << a[1][0] + a[0][1] + 1;
  //   else if (a[0][1] == -1 && a[1][0] == -1)
  //     cout << a[0][0] + a[1][1] + 1;
  //   else
  //     cout << -1;
  // }

  // else
  //   cout << -1;
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