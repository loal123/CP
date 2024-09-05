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
	int dp[11][6][2];
	
	memset(dp,0,sizeof(dp));
	dp[0][0][0] = 1;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 0; j <= 5; j++)
		{
			if (j > 0) 
			{
				dp[i][j][0] += dp[i - 1][j - 1][0];
				dp[i][j][1] += dp[i - 1][j - 1][1];
			}
			dp[i][j][0] += dp[i - 1][j][0];
			dp[i][j][1] += dp[i - 1][j][0];
			 
		}
	}
	cout << dp[10][5][1] << '\n';
	
	
	
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