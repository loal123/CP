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
// Super is the cutest girl
void solve()
{
    int n, m, k, d;
    cin >> n >> m >> k >> d;
    vl a(n);
    for (int i = 0; i < n; i++)
    {
        vl dp(m, INF);
        vi v(m);
        multiset<ll> mst = {1};
        dp[0] = 1;
        cin >> v[0];
        for (int j = 1; j < m - 1; j++)
        {
            cin >> v[j];
            dp[j] = *mst.begin() + v[j] + 1;
            if (j - d - 1 >= 0)
            {
                mst.erase(mst.find(dp[j - d - 1]));
            }
            mst.insert(dp[j]);
        }
        cin >> v.back();
        dp.back() = 1 + *mst.begin();
        a[i] = dp.back();
    }

    ll curr = 0;
    for (int i = 0; i < k; i++)
    {
        curr += a[i];
    }
    ll mini = curr;

    for (int i = k; i < n; i++)
    {
        curr += a[i] - a[i - k];
        mini = min(curr, mini);
    }
    cout << mini << '\n';
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