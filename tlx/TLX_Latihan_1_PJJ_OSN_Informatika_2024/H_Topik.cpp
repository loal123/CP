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
bool compare(pll a, pll b)
{
    if (a.fi < a.se)
        return 1;
    return 0;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vl curr(k, 0);
    vector<vl> v(n, vl(k));
    vector<vl> val(n, vl(k));
    vl currval(k, 0);
    vl currcan(n, 0);
    vector<vector<pll>> idx(k, vector<pll>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> v[i][j];
            idx[j][i].fi = v[i][j];
            idx[j][i].se = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> val[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < k; i++)
        sort(idx[i].begin(), idx[i].end());
    while (1)
    {
        bool can = 0;
        for (int i = 0; i < k; i++)
        {
            while (idx[i][curr[i]].fi <= currval[i] && curr[i] < n)
            {
                if (++currcan[idx[i][curr[i]].se] == k)
                {
                    ans++;
                    int curridx = idx[i][curr[i]].se;
                    for (int j = 0; j < k; j++)
                    {
                        currval[j] += val[curridx][j];
                    }
                }
                can = 1;

                curr[i]++;
            }
        }
        if (!can)
            break;
    }
    cout << ans << '\n';
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