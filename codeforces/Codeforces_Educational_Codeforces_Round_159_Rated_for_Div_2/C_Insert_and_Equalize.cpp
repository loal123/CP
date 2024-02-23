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
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    sort(all(v));
    ll last = v[SZ(v) - 1];
    ll ans = 0;
    ll fpb = v[1] - v[0];
    vl diff;
    diff.pb(fpb);
    for (int i = 2; i < n; i++)
    {
        ll differ = v[i] - v[i - 1];
        fpb = gcd(differ, fpb);
        diff.pb(differ);
    }
    int idx = -1;
    for (int i = SZ(diff) - 1; i >= 0; i--)
    {
        if (diff[i] != fpb)
        {
            idx = i + 1;
            break;
        }
    }
    if (idx == -1)
    {
        v.pb(last + fpb);
    }
    else
    {
        v.pb(v[idx] - fpb);
    }
    sort(all(v));
    last = v[SZ(v) - 1];
    for (auto i : v)
    {
        ans += (last - i) / fpb;
    }

    // -19 -15 -3 1 17
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