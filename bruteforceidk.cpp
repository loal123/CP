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
	set<int> can;
	can.insert(0);
	can.insert(2);
	can.insert(4);
	can.insert(5);
	can.insert(6);
	can.insert(8);
	int ans = 0;
	for (int i = 1000; i <= 9999; i++)
	{
		if (i & 1) continue;
		bool cans = true;
		set<int> cnt;
		int temp = i;
		while (temp > 0)
		{
			int xd = temp % 10;
			if (!can.count(xd)) cans = 0;
			cnt.insert(xd);
			temp /= 10;
		}
		
		if (SZ(cnt) != 4) cans = 0;
			
			
		ans += cans;
	}
	cout << ans << '\n';
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