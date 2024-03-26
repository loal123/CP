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
    ll n, c;
    cin >> n >> c;
    ll maxi = -1;
    ll curr = 0;
    ll ans = 0;
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }

    if (c < 0)
    {
        maxi = 0;
        for (int i = 0; i < n; i++)
        {

            curr += a[i];
            if (curr > 0)
            {
                curr = 0;
            }
            maxi = min(maxi, curr);
        }
        cout << (ll)ans - (maxi) + (ll)maxi * (c);
    }
    else if (c > 0)
    {
        for (int i = 0; i < n; i++)
        {

            curr += a[i];
            if (curr < 0)
            {
                curr = 0;
            }
            maxi = max(maxi, curr);
        }
        cout << (ll)ans - maxi + (ll)maxi * (c);
    }
    else
        cout << ans;
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