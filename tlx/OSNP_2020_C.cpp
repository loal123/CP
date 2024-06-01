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
struct informasi {
	int start,end,value;
};
void solve()
{
	int n;
	cin >> n;
	
	vector<pii> adj[15005];
	vi dp(15005,0);
	for (int i = 0; i < n; i++)
	{
		int x,y,z;
		cin >> x >> y >> z;
		adj[x].pb({y,z});
		
	}
	for (int i = 1; i <= 15000; i ++)
	{
		sort(all(adj[i]));
	}
	
	
	for (int i = 1; i <= 15000;i++)
	{
		dp[i] = max(dp[i - 1],dp[i]);
		for (auto j : adj[i])
		{
			dp[j.fi + 1] = max(dp[j.fi + 1], dp[i] + j.se );
		}
	}
	int maxi = -1;
	cout << dp[15000];
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