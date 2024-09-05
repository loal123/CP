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
const ll mod = 998244353;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    map<int, int> x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        x[a[i]] = b[i];
    }
    int m;
    cin >> m;
    vi c(m), d(m);
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
        y[c[i]] = d[i];
    }
    bool can = true;
    ll curr = 1;
    for (auto i : y)
    {
        if (i.se > x[i.fi])
        {
            cout << 0 << '\n';
            return;
        }
        if (i.se != x[i.fi])
        {
            curr *= 2;
            x[i.fi] = i.se;
        }

        curr %= mod;
    }
    for (auto i : x)
    {
        if (i.se != y[i.fi])
            curr *= 2;

        curr %= mod;
    }

    cout << curr << '\n';
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