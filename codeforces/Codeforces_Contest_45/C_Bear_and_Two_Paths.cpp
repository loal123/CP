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
    int n, k;
    cin >> n >> k;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<bool> has(n + 1, 0);
    has[a] = 1;
    has[b] = 1;
    has[c] = 1;
    has[d] = 1;
    if (k <= n || n == 4)
    {
        cout << -1;
        return;
    }
    vi curr;
    curr.pb(a);
    curr.pb(c);
    for (int i = 1; i <= n; i++)
    {
        if (!has[i])
        {
            curr.pb(i);
            has[i] = 1;
        }
    }

    curr.pb(d);
    curr.pb(b);
    for (auto i : curr)
        cout << i << " ";

    cout << '\n';
    swap(curr[0], curr[1]);
    swap(curr[n - 2], curr[n - 1]);
    for (auto i : curr)
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