#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less_equal<int>,
             rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
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
    vi v(n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int key;
    ordered_set s;

    s.insert(v[0]);
    m[v[0]]++;
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        s.insert(v[i]);
        m[v[i]]++;

        key = s.order_of_key(v[i] + 1);

        ans += SZ(s) - key + m[v[i]] - 1;
    }

    cout << ans << '\n';
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