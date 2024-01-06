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
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // pref = 5 5 6 6 7 (7)
    //        5 1 4 2 3
    // suff = 5 2 2 -1 -1  (5)
    vi pref(n);
    vi suff(n);
    for (int i = 0; i < n; i++)
    {
        pref[i] = a[i] + i;
        suff[i] = a[i] - i;
    }
    for (int i = 1; i < n; i++)
    {
        pref[i] = max(pref[i], pref[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = max(suff[i], suff[i + 1]);
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        ans = max(ans, pref[i - 1] + a[i] + suff[i + 1]);
    }

    cout << ans;

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