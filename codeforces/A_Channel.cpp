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
// Super is a cute girl
void solve()
{
  int n, a, q;
  cin >> n >> a >> q;
  string s;
  cin >> s;
  bool can = false;
  if (a == n)
    can = true;
  int counts = 0;
  for (int i = 0; i < q; i++)
  {
    if (s[i] == '+')
    {
      a++;
      counts++;
    }
    else
      a--;
    if (a == n)
      can = true;
  }
  bool maybe = false;
  if (a + counts >= n)
    maybe = true;
  if (can)
    cout << "YES";
  else if (maybe)
    cout << "MAYBE";
  else
    cout << "NO";

  cout << '\n';
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}