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
    int n, m;
    cin >> n >> m;
    vector<pii> v(n);
    vi l(n);
    vi r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi >> v[i].se;
        l[i] = v[i].fi;
        r[i] = v[i].se;
    }

    sort(all(l));
    sort(all(r));

    for (int i = 0; i < n; i++)
    {

        int right = upper_bound(all(r), v[i].se) - r.begin();
        int left = lower_bound(all(r), v[i].fi) - r.begin();
        if (v[i].fi != v[i].se)
            cout << right - left << endl;
        else
            cout << right - left - 1 << endl;
    }
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