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

struct info
{
    int cost, mask;
    ll comps;
};
bool compares(info &a, info &b)
{
    return a.comps < b.comps;
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<info> v(n);
    int sz = (1 << m);
    bool has = 0;
    vl dp(sz, 2 * INFF);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> v[i].cost >> v[i].comps >> x;
        v[i].mask = 0;

        for (int j = 0; j < x; j++)
        {
            int problem;
            cin >> problem;
            problem--;
            v[i].mask |= (1 << problem);
        }
    }
    ll ans = 3 * INFF;

    sort(all(v), compares);
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            int after = (j | v[i].mask);
            dp[after] = min(dp[after], dp[j] + v[i].cost);

            if (after == sz - 1)
            {
                ans = min(ans, dp[after] + v[i].comps * k);
                if (dp[j] != 2 * INFF)
                    has = 1;
            }
        }
    }

    if (!has)
    {
        cout << -1;
    }
    else
        cout << ans;

    cout << '\n';
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