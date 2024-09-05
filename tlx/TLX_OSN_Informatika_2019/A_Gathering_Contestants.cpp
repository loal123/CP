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
vi divisors;
void solve()
{
    int n, m;
    cin >> n >> m;
    int square[n + 2][m + 2];
    int pref[n + 2][m + 2];
    memset(pref, 0, sizeof(pref));
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char x;
            cin >> x;
            square[i][j] = (x - '0' ? 1 : 0);

            cnt += square[i][j];
        }
    }
    if (cnt == 1)
    {
        cout << 0 << endl;
        return;
    }
    int mini = INF;

    for (int i = 1; i * i <= cnt; i++)
    {
        if (cnt % i == 0)
        {
            divisors.pb(i);
            if (cnt / i != i)
                divisors.pb(cnt / i);
        }
    }
    sort(all(divisors));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            pref[i][j] = square[i][j] + pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
        }
    }

    for (auto i : divisors)
    {
        int x = i, y = cnt / i;

        if (x > n || y > m)
            continue;

        for (int i = 0; i <= n - x; i++)
        {
            for (int j = 0; j <= m - y; j++)
            {
                int xd = pref[i + x][j + y] - pref[i][j + y] - pref[i + x][j] + pref[i][j];
                mini = min(cnt - xd, mini);
            }
        }
    }
    cout << (mini == INF ? -1 : mini) << endl;
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