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
    ll n, m;
    cin >> n >> m;
    vector<pll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].se;
    }
    sort(all(v));
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1].fi - v[i].fi > 1)
            continue;
        ll curr = v[i + 1].fi * min((ll)(m / v[i + 1].fi), (ll)v[i + 1].se);
        
        ll currcnt = m / v[i + 1].fi;
        ans = max(ans, curr);
        if (curr == m)
            continue;
        if (currcnt >= curr - (m - v[i].fi))
        {
        }
    }
    // two pointers but with limits ?
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