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
    int n, p;
    cin >> n >> p;

    vi v(n);
    int l = INF, r = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        l = min(l, v[i]);
        r = max(r, v[i]);
    }
    sort(all(v));
    vi ans;
    for (int i = l; i <= r; i++)
    {
        bool can = 1;
        for (int x = 0; x < n; x++)
        {
            int pos = upper_bound(all(v), x + i) - v.begin() - x;
            if (pos % p == 0)
            {
                can = 0;
                break;
            }
        }
        if (can)
            ans.pb(i);
    }
    cout << SZ(ans) << '\n';
    for (auto i : ans)
        cout << i << ' ';
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