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
    vl twos(32769, 0);

    twos[0] = 15;

    for (int i = 1; i <= 32768; i++)
    {
        int xd = i;
        while (xd % 2 == 0)
        {
            twos[i]++;
            xd /= 2;
        }
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ll ans = INF;
        ll curr = -1;
        while (curr++ <= 15)
        {
            ans = min(ans, 15 - twos[(x + curr) % 32768] + curr);
        }
        cout << ans << " ";
    }
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