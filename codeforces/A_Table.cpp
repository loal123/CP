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
    int a[n][m];
    bool four = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                if (i + 1 == n || j + 1 == m || i == 0 || j == 0)
                    four = true;
            }
        }
    }
    if (four)
        cout << 2;
    else
        cout << 4;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}