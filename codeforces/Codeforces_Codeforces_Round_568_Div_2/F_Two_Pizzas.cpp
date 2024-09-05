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
pll ians;
vector<pll> costi(512, {-1, -1});
void findmin(pll &p, ll x, int i, int mask)
{
    if (p.fi > x)
    {
        costi[mask].se = costi[mask].fi;
        p.se = p.fi;
        costi[mask].fi = i;
        p.fi = x;
    }
    else if (p.se > x)
    {
        p.se = x;
        costi[mask].se = i;
    }
}
void fans(pll &p, ll f, ll x, int i, int j)
{
    if (f > p.fi)
    {
        p.fi = f;
        p.se = x;
        ians.fi = i, ians.se = j;
    }
    else if (f == p.fi)
    {
        if (x < p.se)
        {
            ians.fi = i, ians.se = j;
            p.se = x;
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pll> cost(1 << 9, {INFF, INFF});

    vector<pii> f(1 << 9);
    for (int i = 0; i < n; i++)
    {
        int sz;
        cin >> sz;
        int mask = 0;
        for (int j = 0; j < sz; j++)
        {
            int x;
            cin >> x;
            x--;
            mask |= (1 << x);
        }
        f[mask].fi++;
    }

    for (int i = 0; i < m; i++)
    {
        ll c;
        cin >> c;
        int sz;
        cin >> sz;
        int mask = 0;
        for (int j = 0; j < sz; j++)
        {
            int x;
            cin >> x;
            x--;
            mask |= (1 << x);
        }

        findmin(cost[mask], c, i + 1, mask);
    }
    for (int i = 0; i < 512; i++)
    {
        for (int j = 0; j < 512; j++)
        {
            if (__builtin_popcount(i) > __builtin_popcount(j) && (i & j) == j)
            {
                f[i].se += f[j].fi;
            }
        }
    }
    pll ans = {0LL, INFF};
    for (int i = 0; i < 512; i++)
    {
        for (int j = 0; j < 512; j++)
        {

            if (i == j)
            {
                if (cost[i].fi != INFF && cost[i].se != INFF)
                {
                    int x = costi[i].fi, y = costi[i].se;
                    ll fr = f[i].fi + f[i].se;

                    ll cst = cost[i].fi + cost[i].se;
                    fans(ans, fr, cst, x, y);
                }
            }
            else
            {
                if (cost[i].fi == INFF || cost[j].fi == INFF)
                    continue;

                int x = costi[i].fi, y = costi[j].fi;
                ll fr = f[i | j].fi + f[i | j].se;
                ll cst = cost[i].fi + cost[j].fi;
                fans(ans, fr, cst, x, y);
            }
        }
    }
    cout << ians.fi << " " << ians.se << '\n';
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