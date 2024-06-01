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
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = INF;
    for (int i = 0; i < n; i++)
    {
        int mini = INF;
        int needed = (a[i] + 1) / 2;
        // check idk
        if (i > 0)
        {
            int left = max(a[i - 1] - needed, 0);
            mini = min(mini, left);
        }
        if (i < n - 1)
        {
            int right = max(a[i + 1] - needed, 0);
            mini = min(right, mini);
        }
        needed += mini;
        ans = min(ans, needed);
    }
    for (int i = 1; i < n - 1; i++)
    {
        int curr = max(a[i - 1], a[i + 1]);
        ans = min(ans, curr);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int mini = min(a[i], a[i + 1]);
        int maxi = max(a[i], a[i + 1]);
        if (mini * 2 <= maxi)
        {
            ans = min((maxi + 1) / 2, ans);
        }
        else
        {
            int curr = maxi - mini;
            maxi -= curr * 2;
            mini -= curr;
            ans = min((mini + maxi + 2) / 3 + curr, ans);
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        ans = min(ans, (a[i] + a[i + 2] + 1) / 2);
    }
    sort(all(a));
    ans = min(ans, (a[0] + 1) / 2 + (a[1] + 1) / 2);

    cout << ans;
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