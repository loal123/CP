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
    vector<pii> v;
    vector<pii> v1;
    vector<pii> v2;
    int n;
    cin >> n;
    bool can[n * 2];
    memset(can, 0, sizeof(can));
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.pb(mp(x, i));
        v.pb(mp(y, n + i));
        v1.pb(mp(x, i));
        v2.pb(mp(y, n + i));
    }
    sort(all(v));
    sort(all(v1));
    sort(all(v2));

    for (int i = 0; i < n / 2; i++)
    {
        can[v1[i].se] = true;
    }
    for (int i = 0; i < n / 2; i++)
    {
        can[v2[i].se] = true;
    }
    for (int i = 0; i < n; i++)
    {
        can[v[i].se] = true;
    }
    for (int i = 0; i < n; i++)
    {
        cout << can[i];
    }
    cout << endl;
    for (int i = n; i < n * 2; i++)
    {
        cout << can[i];
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