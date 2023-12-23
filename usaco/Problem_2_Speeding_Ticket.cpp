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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pii> v;
    vector<pii> vv;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.pb(mp(a, b));
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        vv.pb(mp(a, b));
    }
    int counts = 1;
    int pos1 = 0;
    int pos2 = 0;
    int counts2 = 1;
    int maxi = 0;
    for (int i = 1; i <= 100; i++)
    {
        maxi = max(maxi, (vv[pos2].se - v[pos1].se));

        if (v[pos1].fi == counts)
        {
            pos1++;
            counts = 0;
        }

        if (vv[pos2].fi == counts2)
        {
            pos2++;
            counts2 = 0;
        }
        counts++;
        counts2++;
    }
    cout << maxi;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    // int t; cin >> t; while(t--)
    solve();
}