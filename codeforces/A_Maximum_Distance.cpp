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
  int n;
  cin >> n;
  int x[n];
  int y[n];
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> y[i];
  }
  ll maxi = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int dx = x[i] - x[j];
      int dy = y[i] - y[j];
      maxi = max(maxi, (ll)dx * dx + dy * dy);
    }
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