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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        int best = 0;
        for (int i = 0; i < n; i++)
        {
            best = max(best, a[i][j] - '0');
        }
        b[j] = best;
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (a[i][j] - '0' == b[j])
            {
                total++;
                break;
            }
        }
    }
    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}