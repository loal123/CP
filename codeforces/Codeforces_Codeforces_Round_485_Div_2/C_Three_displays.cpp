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
ll dp[4][3005];
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    vi h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    for (int i = 0; i < n; i++)
    {
        dp[1][i] = h[i];
        for (int j = 2; j <= 3; j++)
        {
            dp[j][i] = INFF;

            for (int k = 0; k < i; k++)
            {
                if (a[i] > a[k])
                {
                    dp[j][i] = min(dp[j][i], dp[j - 1][k] + h[i]);
                }
            }
        }
    }
    ll x = *min_element(dp[3], dp[3] + n);

    cout << (x == INFF ? -1 : x);
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