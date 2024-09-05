#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define pb push_back
const int maxn = 5e4 + 10;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 10;
vector<pll> adj[maxn];
vector<bool> vis(maxn);
vl dist(maxn, INFF);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,q;
	cin >> n >> q;
	vi v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	
	
	
	while(q--)
	{
		
		int p,x;
		cin >> p >> x;
		p--;
		v[p] = x;
		vi xd = v;
		sort(all(xd));
		for (auto i : xd) cout << i << " ";
		
		cout << '\n';
	}
	
}