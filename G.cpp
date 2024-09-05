#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
void solve()
{
	int n,m; cin >> n >> m;
	vector<vi> v(n, vi(m));

	for (int i = 0;i < n;i++)
	{
		for (int j = 0; j < m;j++)
		{
			cin >> v[i][j];
		}
	}
		if (n == 1 && m == 1) {
		cout << -1 << '\n';
		return;
	}
	if (m > 1)
	{
		for (int i = 0 ; i < n;i++) {
		v[i].pb(v[i][0]);
		for (int j = 1; j <= m; j++)
		{
			cout << v[i][j] << " ";
		}
		cout << '\n';
		}
	}
	else {
		vi xd = v[0];
		v.pb(xd);
		for (int i = 1; i<= n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << v[i][j] << ' ';
			}
			cout << '\n';
		}
	}
	
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
     int t; cin >> t; while(t--)
    solve();
}