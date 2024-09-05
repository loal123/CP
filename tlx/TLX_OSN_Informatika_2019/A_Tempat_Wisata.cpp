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
int n, m;
vi pref(200005, 0);
vector<pair<pii, int>> RNGES;
vi xd;

void solve()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        RNGES.pb({{a, b}, i});
    }
    sort(all(RNGES));
    for (auto i : RNGES)
        xd.pb(i.fi.fi);
    int stuff[n + 3];
    for (int i = 0; i < n; i++)
    {
        int r = upper_bound(all(xd), RNGES[i].fi.se) - xd.begin();
        stuff[i] = r - i - 1;
        pref[i + 1]++;
        pref[r]--;
    }

    for (int i = 1; i <= n; i++)
    {
        pref[i] += pref[i - 1];
        stuff[i] += pref[i];
    }
    int pos[n + 2];
    for (int i = 0; i < n; i++)
    {
        pos[RNGES[i].se] = stuff[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << pos[i] << '\n';
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