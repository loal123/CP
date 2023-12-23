/*
ID: ruperth1
TASK: ride
LANG: C++
*/
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
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ofstream fout("ride.out");
  ifstream fin("ride.in");
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  // int t; cin >> t; while(t--)
  string s1, s2;
  fin >> s1 >> s2;
  ll counts = 1;
  ll counts2 = 1;
  for (int i = 0; i < s1.size(); i++)
  {
    counts *= s1[i] - 'A' + 1;
  }
  for (int i = 0; i < s2.size(); i++)
  {
    counts2 *= s2[i] - 'A' + 1;
  }
  string z = (counts % 47 == counts2 % 47) ? "GO" : "STAY";
  fout << z << '\n';
}