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
    int n, m, q;
    cin >> n >> m;
    char z[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i & j)
                z[i][j] = '.';
            else
                z[i][j] = '#';
        }
    }
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        ll cnt = 0;
        bool curr = (z[a][b] == '#');
        if (curr)
            cnt++;
        for (int i = a + 1; i <= c; i++)
        {
            if (z[i][b] == '#' && !curr)
            {
                cnt++;
                curr = 1;
            }
            if (z[i][b] == '.')
                curr = 0;
        }
        curr = (z[a][b] == '#');
        for (int i = b + 1; i <= d; i++)
        {

            if (z[a][i] == '#' && !curr)
            {
                cnt++;
                curr = 1;
            }
            if (z[a][i] == '.')
                curr = 0;
        }
        cout << cnt << '\n';
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