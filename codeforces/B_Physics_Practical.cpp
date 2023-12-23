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
const ll mod = 1e9 + 7;
vi v;
// int idk[1000000];
// int dp(int x, int y, int count)
// {
//   int add = 0;
//   if (v[y] <= v[x] * 2)
//     return count;
//   if (idk[abs(v[y] - v[x])] != -1)
//     return idk[abs(v[y] - v[x])];

//   idk[abs(v[y] - v[x])] = count;

//   return min({
//       dp(x + 1, y, count + 1),
//       dp(x, y - 1, count + 1),
//   });
// }
// Super is a cute girl
void solve()
{
  // memset(idk, -1, sizeof(idk));
  int supercutegirl;
  cin >> supercutegirl;

  for (int i = 0; i < supercutegirl; i++)
  {
    int z;
    cin >> z;
    v.pb(z);
  }
  sort(v.begin(), v.end());
  int flanxsuperyuri = 1e9;
  for (int i = 0; i < supercutegirl; i++)
  {
    flanxsuperyuri = min(flanxsuperyuri, i + (int)(v.end() - upper_bound(v.begin(), v.end(), v[i] * 2)));
  }
  cout << flanxsuperyuri;
}
//  cout << dp(0, supercutegirl - 1, 0);

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  // int t; cin >> t; while(t--)
  solve();
}