// Problem: C. Menjaga Jarak
// Contest: TLX - KSN Informatika 2020
// URL: https://tlx.toki.id/problems/ksn-2020/1C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

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
    int n, m, k;
    cin >> n >> m >> k;
    if (k >= n)
    {
        cout << 0 << '\n';
        return;
    }

    if (k == 0)
    {
        map<int, int> M;
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            M[x]++;
            if (M[x] > m)
            {
                M.clear();
                M[x] = 1;
                ans++;
            }
        }
        cout << ans << '\n';
        return;
    }
    vi v(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    if (SZ(s) == 1)
    {
        n -= k;
        cout << (n + m - 1) / m;
        return;
    }
    vector<vl> dp(n + 1, vl(k + 1, INF));
    ll cnt[n + 1][n + 1];
    for (int i = 0; i < n; i++)
    {
        ll ans = 0;
        map<int, int> M;
        for (int j = i; j < n; j++)
        {
            M[v[j]]++;
            if (M[v[j]] > m)
                ans++;
            cnt[i][j] = ans;
        }
    }

    for (int i = 0; i <= k; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            ll mini = INF;
            for (int x = 0; x < i; x++)
            {
                if (j - cnt[x][i - 1] >= 0)
                {
                    mini = min(mini, dp[x][j - cnt[x][i - 1]]);
                }
            }
            dp[i][j] = min(dp[i][j], mini + 1);
        }
    }
    cout << dp[n][k] << '\n';
    // for (int i = 0; i < n; i++)
    // {
    //     M[v[i]].pb(i);
    //     int
    //     if (SZ(M[v[i]]) >= m)
    //     {
    //         int curr = M[v[]]
    //         for (int j = 0; j < k; j++)
    //         {
    //             dp[i][j] = min(dp[i][j], dp[][j] + 1);
    //             dp[i][j + 1] = min(dp[i][j + 1], dp[0][j]);
    //         }
    //     }
    // }
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