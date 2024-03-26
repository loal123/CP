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
    vi v;
    vi yeah;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        yeah.pb(i);
    }
    do
    {
        for (auto i : yeah)
            v.pb(i);
    } while (next_permutation(all(yeah)));
    for (int i = (n - 1); i < SZ(v); i++)
    {
        ll counts = 0;
        for (int j = i - (n - 1); j <= i; j++)
        {
            counts += v[j];
        }
        if (counts == (n * (n + 1) / 2))
            ans++;
    }
    cout << ans << '\n';
}
// 1 0
// 2 0
// 9 3
// 56 32
// 395 270
// 3084 2364
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