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
    ll n, m;
    cin >> n >> m;
    vl v(n);
    vl pref(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + v[i];
    }
    ll ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        bool left = false;
        while (v[r] - v[l] > 1)
            l++;

        if (pref[r + 1] - pref[l] <= m)
        {
            ans = max(pref[r + 1] - pref[l], ans);
        }

        else
        {
            if (r != l)
            {
                l++;
                left = 1;
            }
            else
            {
                cout << ans << '\n';
                return;
            }
        }
        if (!left)
            r++;
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