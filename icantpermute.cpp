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
	string xd = "ABCDEF";
	sort(all(xd));
	int ans = 0;
	do 
	{
		bool can = false;
		for (int i = 0; i < 5; i++)
		{
			if (xd[i] == 'A' && xd[i + 1] == 'B' ) can = 1;
			if (xd[i] == 'B' && xd[i + 1] == 'A') can = 1;
		}
		
		ans += can;
	}
	while(next_permutation(all(xd)));
	cout << ans << endl;
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