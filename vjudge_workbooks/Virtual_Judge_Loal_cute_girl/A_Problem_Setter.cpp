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
void solve()
{
  int c, p;
  cin >> c >> p;
  vector<pll> contests(c);
  for (int i = 0; i < c; i++)
    cin >> contests[i].fi >> contests[i].se;

  vector<pll> problems(p);
  for (int i = 0; i < p; i++)
    cin >> problems[i].fi >> problems[i].se;

  vl actualfi(c);
  vl actualse(c);
  sort(all(contests));
  ll maxi = -INF;
  for (int i = 0; i < c; i++)
  {
    maxi = max(maxi, contests[i].se);
    actualfi[i] = contests[i].fi;
    actualse[i] = maxi;
  }
  ll ans = 0;
  for (auto i : problems)
  {
    int pos = upper_bound(all(actualfi), i.fi) - actualfi.begin();
    if (pos == 0 && actualfi[pos] != i.fi)
      continue;

    if (actualfi[pos] != i.fi)
      pos--;

    if (actualse[pos] >= i.se)
    {
      ans += actualse[pos] - i.se;
    }
  }
  cout << ans;
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