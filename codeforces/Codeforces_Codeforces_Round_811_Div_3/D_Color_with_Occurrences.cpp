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
    string t;
    cin >> t;
    int n;
    cin >> n;

    vi dp((1 << SZ(t)), INF);
    dp[0] = 0;
    vector<pair<pii, int>> par(1 << SZ(t));
    par[0] = {{-1, -1}, -1};
    vector<string> s(n);
    vi v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];

        int sz = SZ(s[i]);
        for (int j = 0; j < SZ(t) - sz + 1; j++)
        {
            if (t.substr(j, sz) == s[i])
                v[i].pb(j);
        }
    }
    for (int i = 0; i < (1 << SZ(t)); i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < SZ(v[j]); k++)
            {
                int sz = SZ(s[j]);
                int curr = 0;
                for (int idx = v[j][k]; idx < v[j][k] + sz; idx++)
                    curr |= (1 << idx);

                if (dp[i] + 1 <= dp[(i | curr)])
                {
                    par[(i | curr)] = {{j, v[j][k]}, i};
                    dp[(i | curr)] = dp[i] + 1;
                }
            }
        }
    }

    if (dp[(1 << SZ(t)) - 1] == INF)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << dp[(1 << SZ(t)) - 1] << '\n';

        int idk = (1 << SZ(t)) - 1;
        while (par[idk].se != -1)
        {
            cout << par[idk].fi.fi + 1 << " " << par[idk].fi.se + 1 << '\n';
            idk = par[idk].se;
        }
    }
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