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
#define int long long
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int total = 0;
    vi v;
    vi v2;
    v.pb(0);
    v2.pb(0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
        v.pb(total);
    }
    sort(a, a + n);
    total = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
        v2.pb(total);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
        {
            cout << v[r] - v[l - 1] << '\n';
        }
        else
            cout << v2[r] - v2[l - 1] << '\n';
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}