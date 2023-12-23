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
    ll n, m;
    cin >> n >> m;
    ll a[n];
    vector<pll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        ll z;
        cin >> z;
        v.pb(mp(z, 0));
    }

    bool have = false;

    for (int j = 0; j < m; j++)
    {

        for (int i = 0; i < n; i++)
        {
            if (v[j].fi == v[j].se)
                break;
            if (a[i] > v[j].se)
            {
                if (a[i] <= v[j].fi)
                {
                    int bruh = v[j].se;
                    v[j].se = a[i];
                    a[i] += a[i] - bruh;
                }
                else
                {
                    a[i] += v[j].fi - v[j].se;
                    v[j].se = v[j].fi;
                }
            }
            else
            {
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '\n';
    }
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