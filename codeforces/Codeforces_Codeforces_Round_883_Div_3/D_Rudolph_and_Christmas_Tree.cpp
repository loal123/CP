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
    double d, h;
    cin >> n >> d >> h;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            if (v[i] + h > v[i + 1])
            {
                double yeah = v[i] + h - v[i + 1];
                long double bruh = (ld)(d / h);
                ans += (double)(d + (d - (double)bruh * (h - yeah))) * (h - yeah) / 2;
            }
            else
                ans += (double)d * h / 2;
        }
        else
            ans += (double)d * h / 2;
    }
    cout << fixed << setprecision(7) << ans << '\n';
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