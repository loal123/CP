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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    vector<bool> vis(n);
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll maxi = -1;
    for (int i = 0; i < n; i++)
    {
        ll ans = 0;
        ll idx = i;
        while (idx < n)
        {
            if (vis[idx])
                break;
            vis[idx] = 1;
            ans += v[idx];
            idx += v[idx];
        }
        maxi = max(maxi, ans);
    }
    cout << maxi << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}