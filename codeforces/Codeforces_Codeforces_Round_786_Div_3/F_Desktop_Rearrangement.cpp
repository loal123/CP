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
    /*
     ..**
     .*.
     *...
     ...*
    */

    int n, m, q;
    cin >> n >> m >> q;
    int cnt = 0;
    int area = 0;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '*')
                cnt++;
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        if (a[i % n][i / n] == '*')
            area++;
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        x--;
        y--;
        if (a[x][y] == '.')
        {
            cnt++;
            a[x][y] = '*';
            int rn = cnt - 1;
            int i = rn % n;
            int j = rn / n;
            if (a[i][j] == '*')
            {
                area++;
            }
            if (i != x || j != y)
            {
                if (y * n + (x % n) < cnt)
                {
                    area++;
                }
            }
        }
        else
        {
            cnt--;
            int i = (cnt) % n;
            int j = (cnt) / n;
            if (a[i][j] == '*')
                area--;
            a[x][y] = '.';

            if (i != x || j != y)

                if (y * n + (x % n) <= cnt)
                {
                    area--;
                }
        }

        cout << cnt - area << endl;
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