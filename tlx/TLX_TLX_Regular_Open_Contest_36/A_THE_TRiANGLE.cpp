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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = INF;
    for (int i = 1; i < 200; i++)
    {
        for (int j = 1; j < 200; j++)
        {
            for (int k = 1; k < 200; k++)
            {
                if (i + j > k && j + k > i && k + i > j && i >= a && j >= b && k >= c)
                {
                    ans = min(ans, (i - a) + (j - b) + (k - c));
                }
            }
        }
    }
    cout << ans << '\n';
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