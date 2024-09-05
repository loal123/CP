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
vl nums(100005, 0);
// Super is the cutest girl
void solve()
{
    ll n, k;
    cin >> n >> k;
    int curr = lower_bound(all(nums), k) - nums.begin();
    int right = k - nums[curr - 1];
    curr++;
    string ans = "";

    for (int i = 1; i <= n; i++)
    {
        if (i == curr || i == right)
            ans += 'b';
        else
            ans += 'a';
    }
    reverse(all(ans));
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    nums[1] = 1;
    for (ll i = 2; i <= 100002; i++)
    {
        nums[i] = nums[i - 1] + i;
    }
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}