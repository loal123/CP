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
    vector<int> dp;
    int n;
    cin >> n;
    int x;
    cin >> x;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i : a)
    {
        int pos = lower_bound(dp.begin(), dp.end(), i) - dp.begin();
        if (pos == dp.size())
        {
            // we can have a new, longer increasing subsequence!
            dp.push_back(i);
        }
        else
        {
            // oh ok, at least we can make the ending element smaller
            dp[pos] = i;
        }
    }
    for (auto i : dp)
        cout << i << ' ';
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