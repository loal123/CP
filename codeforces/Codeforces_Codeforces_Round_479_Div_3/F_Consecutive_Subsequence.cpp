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
    int n;
    cin >> n;
    int a[n];
    int p[n + 2];
    for (int i = 0; i < n; i++)
    {
        p[i] = i;
    }
    vi dp(n + 5, 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] - a[i] == 1)
            {
                if (dp[i] + 1 > dp[j])
                {
                    p[j] = i;
                    dp[j] = dp[i] + 1;
                }
            }
        }
    }
    int pos;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] > maxi)
        {
            pos = i;
            maxi = dp[i];
        }
    }
    vi v;
    cout << dp[pos] << '\n';
    while (p[pos] != pos)
    {
        v.pb(pos + 1);
        pos = p[pos];
    }
    v.pb(pos + 1);
    reverse(all(v));
    for (auto i : v)
        cout << i << " ";
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