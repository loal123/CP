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
    vector<pii> v(n);

    for (auto &i : v)
        cin >> i.fi >> i.se;

    int curr = v[0].fi;
    int ans = (n > 1 ? 2 : 1);

    for (int i = 1; i < n - 1; i++)
    {
        if (v[i].fi - v[i].se > curr)
        {
            ans++;
            curr = v[i].fi;
        }
        else if (v[i].fi + v[i].se < v[i + 1].fi)
        {
            ans++;
            curr = v[i].fi + v[i].se;
        }
        else
            curr = v[i].fi;
    }
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