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
    int s, n;
    cin >> s >> n;
    vector<pii> byweight[s + 1];

    for (int i = 0; i < n; i++)
    {
        int v, w, k;
        cin >> v >> w >> k;
        byweight[w].pb({v, k});
    }
    vector<pii> items;
    for (int w = 1; w <= s; w++)
    {
        sort(all(byweight[w]));
        int used = s / w + 1;

        while (used != 0 && !byweight[w].empty())
        {
            auto &[v, k] = byweight[w].back();
            items.pb({w, v});
            k--;
            used--;
            if (k == 0)
                byweight[w].pop_back();
        }
    }
    int sz = items.size();
    int dp[sz + 1][s + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= sz; i++)
    {

        for (int w = s; w >= 0; w--)
        {
            dp[i][w] = max(dp[i][w], dp[i - 1][w]);
            if (w - items[i - 1].first >= 0)
            {
                dp[i][w - items[i - 1].first] = max(dp[i][w - items[i - 1].first], dp[i - 1][w] + items[i - 1].second);
            }
        }
    }
    int ans = 0;
    for (auto i : dp[sz])
    {
        ans = max(ans, i);
    }
    cout << ans;
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