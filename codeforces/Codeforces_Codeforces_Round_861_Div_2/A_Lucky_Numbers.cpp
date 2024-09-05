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
vi a[10];
void solve()
{
    int l, r;
    cin >> l >> r;
    for (int i = 9; i >= 0; i--)
    {
        int pos = lower_bound(all(a[i]), l) - a[i].begin();
        if (a[i][pos] <= r)
        {
            cout << a[i][pos] << '\n';
            return;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    for (int i = 1; i <= 1000000; i++)
    {
        int maxi = 0, mini = 9;
        int temp = i;
        while (temp > 0)
        {
            int xd = temp % 10;
            maxi = max(maxi, xd);
            mini = min(mini, xd);
            temp /= 10;
        }
        a[maxi - mini].pb(i);
    }
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}