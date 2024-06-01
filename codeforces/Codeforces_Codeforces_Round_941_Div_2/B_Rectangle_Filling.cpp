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

    int wcnt = 0;
    int bcnt = 0;
    map<int, bool> w;
    map<int, bool> b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            if (x == 'B')
            {
                if (i == 0)
                {
                    b[0] = 1;
                }
                if (i == n - 1)
                    b[1] = 1;
                if (j == 0)
                    b[2] = 1;

                if (j == m - 1)
                    b[3] = 1;
            }
            else if (x == 'W')
            {
                if (i == 0)
                {
                    w[0] = 1;
                }
                if (i == n - 1)
                    w[1] = 1;
                if (j == 0)
                    w[2] = 1;

                if (j == m - 1)
                    w[3] = 1;
            }
        }
    }
    for (auto i : w)
        wcnt += i.se;

    for (auto i : b)
        bcnt += i.se;

    cout << (wcnt == 4 || bcnt == 4 ? "YES\n" : "NO\n");
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