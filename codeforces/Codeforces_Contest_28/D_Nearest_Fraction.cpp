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
#define double ld
// Super is the cutest girl
void solve()
{
    double x, y;
    int n;
    cin >> x >> y >> n;

    double needed = x / y;
    vector<pii> curr;
    double mini = INF;
    for (double i = 1; i <= n; i += 1)
    {
        double l = 0, r = 100000000000;
        while (r - l > 5)
        {
            double mid = floor((l + r) / 2);
            if (mid / i >= needed)
            {
                r = mid;
            }
            else
                l = mid;
        }
        for (l; l <= r; l += 1)
        {
            if (abs(needed - l / i) <= mini)
            {
                if (abs(needed - l / i) == mini)
                    curr.pb({l, i});
                else
                {
                    curr.clear();
                    curr.pb({l, i});
                    mini = abs(needed - l / i);
                }
            }
        }
    }
    int num = INF;
    int dem = INF;

    for (auto i : curr)
    {
        if (i.se < dem)
        {
            dem = i.se;
            num = i.fi;
        }
        else if (i.se == dem)
        {
            num = min(num, i.fi);
        }
    }
    cout << num << '/' << dem;
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