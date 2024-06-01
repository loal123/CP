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
    vi v;
    v.pb(0);
    for (int i = 1; i <= n * n; i++)
    {
        v.pb(i);
        v.pb(n * n - i + 1);
    }
    int a[n + 5][n + 5];
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = v[i * n + j + 1];
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                a[i][n - 1 - j] = v[i * n + j + 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
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