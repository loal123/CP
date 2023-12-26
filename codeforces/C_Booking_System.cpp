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
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    vector<pair<pii, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[i].fi = {y, x};
        v[i].se = i + 1;
    }
    sort(v.rbegin(), v.rend());
    int m;
    cin >> m;
    vector<pii> v2;
    for (int i = 0; i < m; i++)
    {
        int z;
        cin >> z;
        v2.pb(mp(z, i + 1));
    }
    sort(v2.begin(), v2.end());
    int i = 0, j = 0;
    int counts = 0, total = 0;
    vector<pii> v3;
    bool have[m] = {false};
    for (auto i : v)
    {
        for (int j = 0; j < m; j++)
        {
            if (i.fi.se <= v2[j].fi && !have[j])
            {
                counts++;
                total += i.fi.fi;
                v3.pb(mp(i.se, v2[j].se));
                have[j] = true;
                break;
            }
        }
    }
    cout << counts << " " << total << '\n';
    for (auto i : v3)
    {
        cout << i.fi << " " << i.se << '\n';
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