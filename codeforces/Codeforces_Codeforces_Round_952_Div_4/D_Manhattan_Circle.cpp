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
    int n, m;
    cin >> n >> m;
    char a[n + 2][m + 2];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    vi row(m + 2, 0);
    vi col(n + 2, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            col[i] += (a[i][j] == '#');
            row[j] += (a[i][j] == '#');
        }
    }

    int x = 0;
    int y = 0;

    int maxix = 0;
    int maxiy = 0;
    for (int i = 1; i <= m; i++)
    {
        if (row[i] > maxix)
        {
            x = i;
            maxix = row[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (col[i] > maxiy)
        {
            y = i;
            maxiy = col[i];
        }
    }

    cout << y << ' ' << x << endl;
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