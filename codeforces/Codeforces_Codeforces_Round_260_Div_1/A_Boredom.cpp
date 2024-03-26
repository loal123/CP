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
int counts[100000 + 3];
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    memset(counts, 0, sizeof(counts));
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        counts[z]++;
    }
    ll dp[100000 + 3];
    dp[0] = 0;
    dp[1] = counts[1];

    for (ll i = 2; i <= 100000 + 1; i++)
    {
        dp[i] = max(dp[i - 1], (ll)dp[i - 2] + (ll)i * counts[i]);
    }
    // dp[2] = max(1,0 + 2)
    cout << dp[100000];
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