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
	ll ans = 0;
	ll curr = 0;

	ll n,x; cin >> n >> x;
	vl v(n);
		vi cnt(n);
	for (ll &i : v) cin >> i;

	for (int i = 0; i < n;i++)
	{
		for (int j = i; j < n;j++)
		{
			curr = 0;
			for (int k = i; k <= j; k++)
			{
				curr += v[k];
				if (curr > x) curr = 0;
			}
			if (curr != 0) {
				ans++;
			cout << i + 1 << " " << j + 1 << '\n';
			cnt[j]++;
			}
			
		}
	}
	cout << ans << endl;
	for (auto i :cnt) cout << i << " ";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
     int t; cin >> t; while(t--)
    solve();
}