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
    int n, k;
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        s.insert(a);
        s.insert(b);
    }
    int left = n - SZ(s);
    ll dp[left + 1];
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= left; i++)
    {
        dp[i] = (ll)dp[i - 1] + 2 * (i - 1) * dp[i - 2];
        dp[i] %= mod;
    }

    cout << dp[left] << endl;
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