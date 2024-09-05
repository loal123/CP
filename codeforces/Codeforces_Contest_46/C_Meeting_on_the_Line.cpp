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
int n;
ld f(ld pos, vector<ld> v, vector<ld> t)
{
    ld val = 0;
    for (int i = 0; i < n; i++)
    {
        val = max((ld)val, (ld)abs(pos - v[i]) + t[i]);
    }

    return val;
}
void solve()
{

    cin >> n;
    vector<ld> v(n);
    vector<ld> t(n);
    ld maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    ld l = 0, r = maxi;

    while (r - l > (ld)1e-6)
    {
        ld m1 = (ld)(l) + (r - l) / 3;
        ld m2 = (ld)(r) - (r - l) / 3;
        ld f1 = f(m1, v, t);
        ld f2 = f(m2, v, t);
        if (f1 < f2)
        {
            r = m2;
        }
        else
            l = m1;
    }
    cout << fixed << setprecision(10) << (ld)(l + r) / 2 << '\n';
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