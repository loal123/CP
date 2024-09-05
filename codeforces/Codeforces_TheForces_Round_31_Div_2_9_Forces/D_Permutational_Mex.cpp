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
    ll n, s;
    cin >> n >> s;
    vi xd;
    ll idk = s;
    ll curr = n - 1;
    set<int> has;
    if (s < n || s > (ll)(n * (n + 1)) / 2)
    {
        cout << -1 << '\n';
        return;
    }
    idk -= n;
    while (idk > curr)
    {
        xd.pb(curr);
        has.insert(curr);
        idk -= curr;
        curr--;
    }
    if (idk > 0)
    {
        xd.pb(idk);
        has.insert(idk);
    }
    reverse(all(xd));
    for (int i = 1; i < n; i++)
    {
        if (!has.count(i))
            cout << i << ' ';
    }
    cout << 0 << " ";

    for (auto i : xd)
        cout << i << " ";

    cout << '\n';
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