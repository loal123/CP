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
int cnt = 0;
vi v;
map<pii, pair<bool, bool>> m;
bool compare(int a, int b)
{
    if (m[{a, b}].fi)
    {
        return m[{a, b}].se;
    }
    if (m[{b, a}].fi)
    {
        return !m[{b, a}].se;
    }
    cout << "?min " << a << " " << b << endl;

    int x;
    cin >> x;
    m[{a, b}].fi = 1;
    if (x == a)
    {
        m[{a, b}].se = 1;
        return 1;
    }
    m[{a, b}].se = 0;
    return 0;
}
// int askmin(vi &v)

// {
// }
// int askmax(vi &v)
// {
// }
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;

    for (int i = 0; i < n; i++)
    {
        v.pb(i);
    }
    sort(all(v), compare);
    cout << "! ";
    for (auto i : v)
        cout << i << ' ';

    cout << endl;
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