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
    int n, m;
    cin >> n >> m;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    set<int> exist;
    exist.insert(0);
    vi existing;
    existing.pb(0);
    set<int> dp[10005];
    dp[0].insert(0);

    for (int i = 0; i < n; i++)
    {
        for (auto j : exist)
        {
            for (auto k : dp[j])
            {
                if (j + b[i] <= 10000)
                {
                    dp[j + b[i]].insert(k + a[i]);

                    if (!exist.count(j + b[i]))
                    {
                        existing.pb(j + b[i]);
                        sort(existing.rbegin(), existing.rend());
                    }
                    exist.insert(j + b[i]);
                }
            }
        }
    }

    int maxi = -1;
    for (int i = 1; i <= 10000; i++)
    {
        if (dp[i].count(i * m))
            maxi = max(maxi, i * m);
    }

    cout << maxi;
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