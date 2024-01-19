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
// Super is a cute girl
void solve()
{
    int n, k;
    cin >> n >> k;
    int bef[n];
    int aft[n];
    vector<pii> diff(n);
    for (int i = 0; i < n; i++)
    {
        cin >> bef[i];
    }
    vi have;
    for (int i = 0; i < n; i++)
    {
        cin >> aft[i];
        if (bef[i] - aft[i] > 0)
            diff[i].fi = bef[i] - aft[i];
        else
        {
            have.pb(i);
        }
        diff[i].se = i;
    }
    sort(all(diff));

    int ans = 0;
    int rn = 0;
    for (auto i : have)
    {
        ans += bef[i];
        rn++;
    }
    for (; rn < k; rn++)
    {
        ans += bef[diff[rn].se];
    }
    for (; rn < n; rn++)
    {
        ans += aft[diff[rn].se];
    }

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