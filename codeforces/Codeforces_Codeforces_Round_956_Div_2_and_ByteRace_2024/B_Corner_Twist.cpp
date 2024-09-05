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
    int a[n][m];
    int b[n][m];
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            b[i][j] = c - '0';
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int f = a[i][j];
            int s = b[i][j];
            int xd = s - f;
            if ((f + 1) % 3 == s)
            {
                a[i][j] += 1;
                a[i][j] %= 3;
                a[i + 1][j + 1] += 1;
                a[i][j + 1] += 2;
                a[i + 1][j] += 2;
                a[i][j + 1] %= 3;
                a[i + 1][j] %= 3;
                a[i + 1][j + 1] %= 3;
            }
            else if ((f + 2) % 3 == s)
            {
                a[i][j] += 2;
                a[i + 1][j + 1] += 2;
                a[i][j + 1] += 1;
                a[i + 1][j] += 1;
                a[i][j] %= 3;
                a[i][j + 1] %= 3;
                a[i + 1][j] %= 3;
                a[i + 1][j + 1] %= 3;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int f = a[i][j] - '0';
            f %= mod;
            int s = b[i][j] - '0';
            s %= mod;
            if (f != s)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES";
    cout << '\n';
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