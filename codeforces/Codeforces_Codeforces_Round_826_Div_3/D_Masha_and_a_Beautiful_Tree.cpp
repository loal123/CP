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
    int m;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int n = __lg(m);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int yeah = 1 << i;
        for (int j = 0; j <= m - yeah; j += yeah)
        {
            if (!is_sorted(a + j, a + j + yeah))
            {
                for (int k = 0; k < (1 << (i - 1)); k++)
                {
                    swap(a[j + k], a[j + k + (1 << (i - 1))]);
                                }
                ans++;
            }
        }
    }
    cout << (is_sorted(a, a + m) ? ans : -1) << '\n';
}
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