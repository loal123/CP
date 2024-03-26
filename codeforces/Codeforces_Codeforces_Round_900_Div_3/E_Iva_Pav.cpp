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
    int a[n];
    int pref[n + 1][31];
    for (int i = 0; i < 31; i++)
    {
        pref[0][i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        for (int j = 0; j < 30; j++)
        {
            pref[i + 1][j] = pref[i][j] + ((a[i] & (1 << j)) > 0);
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, x;
        cin >> l >> x;
        l--;
        if (a[l] < x)
        {
            cout << -1 << " ";

            continue;
        }
        ll lo = l;
        ll hi = n - 1;
        ll ans = lo;
        while (lo < hi)
        {
            ll mid = lo + (hi - lo + 1) / 2;
            int real = 0;

            for (int i = 0; i < 30; i++)
            {
                if (pref[mid + 1][i] - pref[l][i] == mid - l + 1)
                    real |= (1 << i);
            }
            if (real >= x)
            {
                lo = mid;
                ans = max(lo, ans);
            }
            else
                hi = mid - 1;
        }
        cout << ans + 1 << " ";
    }
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