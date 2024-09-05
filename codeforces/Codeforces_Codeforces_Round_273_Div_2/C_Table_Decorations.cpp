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
    vl a(3);
    for (ll &i : a)
        cin >> i;
    sort(a.rbegin(), a.rend());
    ll ans = 0;
    while (1)
    {
        ll xd = min(a[0] / 2, a[2]);
        ans += xd;
        a[0] -= xd * 2;
        a[2] -= xd;
        if (xd == 0)
        {
            xd = min(a[0] / 2, a[1]);
            ans += xd;
            a[0] -= xd * 2;
            a[1] -= xd;
            if (xd == 0)
                break;
        }

        sort(a.rbegin(), a.rend());
    }
    ans += (a[0] == a[1] && a[1] == a[2] && a[0] > 0);
    ans += min(a[0] / 2, a[1]);
    cout << ans << '\n';
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