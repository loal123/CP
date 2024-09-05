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
    int n, q;
    cin >> n >> q;
    ll actualq = q;
    vl v(n);
    vl sz(n);
    vector<pll> lr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        lr[i] = {v[i], v[i]};
    }
    while (q--)
    {

        ll x;
        cin >> x;

        if (q == actualq - 1)
        {
            for (int i = 0; i < n; i++)
            {
                sz[i] = abs(x);
                if (x > 0)
                {
                    sz[i] = x;
                    v[i] += x;

                    lr[i].se = v[i];
                }
                else
                {
                    sz[i] = abs(x);
                    v[i] += x;
                    lr[i].fi = v[i];
                }
            }
        }
        else
        {
            if (x > 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i == n - 1)
                    {
                        sz[i] += v[i] + x - lr[i].se;
                        lr[i].se = v[i] + x;
                        v[i] += x;
                    }
                    else
                    {
                        sz[i] += max(0LL, lr[i + 1].fi - (v[i] + x - lr[i].se) - 1);
                        lr[i].se = max(lr[i].se, v[i] + x);
                        v[i] += x;
                    }
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (i == 0)
                    {
                        sz[i] += lr[i].fi - (v[i] + x);
                        lr[i].fi = v[i] + x;
                        v[i] += x;
                    }
                    else
                    {
                        if (v[i] + x <= lr[i - 1].se)
                            sz[i] += max(0LL, (lr[i].fi - (v[i] + x)) - (lr[i - 1].se - (v[i] + x) - 1));
                        else
                            sz[i] += max(0LL, lr[i].fi - (v[i] + x));
                        v[i] += x;
                    }
                }
            }
        }
    }
    for (auto i : sz)
    {
        cout << i << '\n';
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