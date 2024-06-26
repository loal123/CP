// Problem: A. Chess For Three
// Contest: Codeforces - Codeforces Round 945 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1973/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
void solve()
{
	vi a(3);
	for (int i = 0; i < 3; i++) cin >> a[i];
	int cnt = 0;
	for (int i =0 ; i< 3; i ++) cnt += a[i];
	
	if (cnt & 1)
	{
		cout << -1 << endl;
		return;
	}
	sort (all(a));
	cout << min(cnt / 2 , a[0]+ a[1]) << endl;
	
	
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t; cin >> t; while(t--)
    solve();
}