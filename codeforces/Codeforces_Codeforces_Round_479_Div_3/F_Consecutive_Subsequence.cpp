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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> dp;
    map<int, int> p;
    map<int, int> last;

    for (int i = 0; i < n; i++)
    {

        if (dp[a[i] - 1] + 1 > dp[a[i]])
            p[a[i]] = last[a[i] - 1];
        dp[a[i]] = max(dp[a[i]], dp[a[i] - 1] + 1);

        last[a[i]] = i + 1;
    }
    int maxi = -1;
    int pos;
    for (auto i : dp)
    {
        if (i.se > maxi)
        {
            maxi = i.se;
            pos = i.fi;
        }
    }
    vi yeah;
    int xd = pos;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == xd)
        {
            yeah.pb(i + 1);
            xd--;
        }
    }
    cout << maxi << '\n';
    sort(all(yeah));
    for (auto i : yeah)
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