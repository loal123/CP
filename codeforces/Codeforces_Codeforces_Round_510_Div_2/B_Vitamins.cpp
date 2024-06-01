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
    int dp[8];
    for (int i = 0; i < 8; i++)
    {
        dp[i] = INF;
    }
    dp[0] = 0;

    vector<pii> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int xd = 0;
        for (auto j : s)
        {
            xd |= (1 << (j - 'A'));
        }
        v.pb({xd, x});
    }
    for (int i = 0; i < 8; i++)
    {
        for (auto j : v)
        {
            dp[(i | j.fi)] = min(dp[(i | j.fi)], dp[i] + j.se);
        }
    }
    cout << (dp[7] == INF ? -1 : dp[7]);
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