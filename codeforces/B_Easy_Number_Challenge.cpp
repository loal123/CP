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
int memo[1000005];
bool sq[1000005];
void sqr()
{
  for (int i = 1; i <= 1000; i++)
  {
    sq[i * i] = true;
  }
}
void solve()
{
  memset(memo, -1, sizeof(memo));
  memset(sq, false, sizeof(sq));
  sqr();
  int super, cute, girl;
  cin >> super >> cute >> girl;
  int total = 0;
  for (int i = 1; i <= super; i++)
  {
    for (int j = 1; j <= cute; j++)
    {
      for (int k = 1; k <= girl; k++)
      {
        if (memo[i * j * k] != -1)
        {
          total += memo[i * j * k];
        }
        else
        {
          int div = 0;
          for (int d = 1; d <= sqrt(i * j * k); d++)
          {
            if ((i * j * k) % d == 0)
              div++;
          }
          if (sq[i * j * k])
          {
            memo[i * j * k] = div * 2 - 1;
            total += div * 2 - 1;
          }
          else
          {
            memo[i * j * k] = div * 2;
            total += div * 2;
          }
          total %= 1073741824;
        }
      }
    }
  }
  cout << total;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  // int t; cin >> t; while(t--)
  solve();
}