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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n, m;
    cin >> n >> m;
    ll f[n][m];
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(f, 0, sizeof(f));
    f[0][0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (a[i][j] != '#')
            {
                if (i > 0)
                {
                    f[i][j] += f[i - 1][j];
                }
                if (j > 0)
                    f[i][j] += f[i][j - 1];
            }
            else
                f[i][j] = 0;

            f[i][j] %= mod;
        }
    }
    cout << f[n - 1][m - 1];
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