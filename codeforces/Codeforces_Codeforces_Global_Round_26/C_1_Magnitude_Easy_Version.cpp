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
    int n;
    cin >> n;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = 0;

    ll ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        ans += v[i];
    }
    ans = abs(ans);
    for (int i = 0; i < n; i++)
    {
        ans2 = abs(ans2 + v[i]);
    }

    ll suff[n + 1];

    suff[n] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + v[i];
    }

    ll maxi = -1;

    ll curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += v[i];

        maxi = max(maxi, (abs(curr) + suff[i + 1]));
    }

    cout << (max({
                ans,
                ans2,
                maxi,
            }))
         << endl;
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