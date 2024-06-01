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
    int n, m;
    cin >> n >> m;
    char a[n][m];
    int tree_pref[n + 5][m + 5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            tree_pref[i][j] = a[i][j] - '0' + tree_pref[i - 1][j] +
                              tree_pref[i][j - 1] - tree_pref[i - 1][j - 1];
        }
    }
    int mini = INF;
    // find perimeter, and then area  and then minimum
    for (int i = 0; i < n - 5; i++)
    {
        ll counts = 0;

        for (int j = 0; j < m - 4; j++)
        {
            counts += tree_pref[i + 3][j + 2] - tree_pref[i + 3][j] - tree_pref[i][j + 2] + tree_pref[i][j];
        }
        cout << counts << endl;
        // test;
    }
    // 4 pointers
    for (int i = 0; i < n;)
    {
    }

    // 2d prefix sum :))))) :(((
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