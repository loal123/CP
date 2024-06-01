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
double cal(double x, double y)
{
    return hypot(x, y);
}
void solve()
{
    int n;
    cin >> n;

    vector<double> rumah;
    vector<double> kurir;
    for (int i = 0; i < n * 2; i++)
    {
        double x, y;
        cin >> x >> y;
        if (x == 0)
            kurir.pb(abs(y));
        else
            rumah.pb(abs(x));
    }
    sort(all(kurir));
    sort(all(rumah));
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += cal(kurir[i], rumah[i]);
    }
    cout << fixed << setprecision(10) << ans << '\n';
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