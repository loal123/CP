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
    int n, k;
    cin >> n >> k;
    int a[n];
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    vi v;
    for (auto i : m)
    {
        if (i.se >= k)
        {
            v.pb(i.fi);
        }
    }
    sort(all(v));
    if (!v.size())
    {
        cout << "-1\n";
        return;
    }
    else if (v.size() == 1)
    {
        cout << v[0] << " " << v[0] << '\n';
        return;
    }
    int xm = 0, ym = 0;
    int ranges = 0;
    int last = 0;
    for (int i = 0; i < SZ(v) - 1; i++)
    {
        if (v[i] + 1 != v[i + 1])
        {
            if (i - last > ranges)
            {
                ranges = i - last;
                xm = last;
                ym = i;
            }
            last = i + 1;
        }
    }
    if (SZ(v) - last > ranges)
    {
        xm = last;
        ym = SZ(v) - 1;
    }

    cout << v[xm] << " " << v[ym] << '\n';
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