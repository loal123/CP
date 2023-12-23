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
    int n, w;
    cin >> n >> w;
    vector<pii> v;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.pb(mp(a, b));
    }
    ll f[n + 1][w + 1];

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
                f[i][j] = 0;

            else if (v[i - 1].fi <= j)
            {
                f[i][j] = max(v[i - 1].se + f[i - 1][j - v[i - 1].fi], f[i - 1][j]);
            }
            else
                f[i][j] = f[i - 1][j];
        }
    }
    cout << f[n][w] << endl;
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