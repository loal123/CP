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
    int x;
    cin >> x;
    vi ans;
    if (x % 2 == 0)
    {
        ans.pb(0);

        x++;
    }

    while (x != 0 && x != (1 << __builtin_popcount(x)) - 1)
    {
        if (__builtin_popcount(x) == 1)
        {
            ans.pb(__lg(x) + 2);
            x ^= ((1 << (__lg(x) + 2)) - 1);
            x++;
            continue;
        }
        ans.pb(__lg(x) + 1);
        x ^= ((1 << (__lg(x) + 1)) - 1);

        x++;
    }

    cout << SZ(ans) * 2 << '\n';
    for (auto i : ans)
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