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
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    vector<pii> v(n);
    map<ll, ll> m1;
    map<ll, ll> m2;
    map<ll, ll> m3;
    map<ll, ll> m4;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        m1[x]++;
        m2[y]++;
        m3[x - y]++;
        m4[x + y]++;
    }
    ll counts = 0;
    for (auto i : m1)
    {
        counts += (ll)i.se * (i.se - 1);
    }
    for (auto i : m2)
    {
        counts += (ll)i.se * (i.se - 1);
    }
    for (auto i : m3)
    {
        counts += (ll)i.se * (i.se - 1);
    }
    for (auto i : m4)
    {
        counts += (ll)i.se * (i.se - 1);
    }

    cout << counts << endl;
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