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
bool compare(pii a, pii b)
{
    if (a.se < b.se)
        return 1;
    return 0;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi >> v[i].se;
    }
    sort(all(v), compare);
    priority_queue<pll> pq;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll curr = 0;
        ll prev = v[i].se;
        ll lprev = v[i].se;
        ll l = v[i].se, r = v[i].se;
        set<int> has;
        int lidx = 0;
        for (int j = i; j < n; j++)
        {

            curr += v[j].fi;
            curr += prev - v[j].se;
            prev = v[j].se;
            pq.push({v[j].fi, j});
            while (curr > k && !pq.empty())
            {
                curr -= pq.top().fi;
                has.insert(pq.top().se);
                pq.pop();
            }
            while (has.count(lidx))
            {
                lidx++;
            }
            curr -= v[lidx].se - lprev;
            lprev = v[lidx].se;
            ans = max(ans, SZ(pq));
        }
        while (!pq.empty())
            pq.pop();
    }

    cout << ans << '\n';

    // dp[last][k]
    // now that we have sorted it by b,
    // greedy or dp to find the best
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