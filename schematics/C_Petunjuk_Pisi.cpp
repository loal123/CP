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
// Super is a cute girl
void solve()
{
    while (1)
    {
        int r, c, y;
        cin >> r >> c >> y;
        if (r == 0 && c == 0 && y == 0)
            break;

        int vis[r][c];

        memset(vis, -1, sizeof(vis));

        char a[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
        int currR = 0, currC = y - 1;
        bool win = false;
        int counts = 0;
        while (1)
        {
            counts++;

            if (currR < 0 || currR >= r || currC < 0 || currR >= c)
            {

                win = true;
                break;
            }
            if (vis[currR][currC] != -1)
            {
                break;
            }
            vis[currR][currC] = counts;
            if (a[currR][currC] == 'U')
            {
                currR--;
            }
            else if (a[currR][currC] == 'S')
            {
                currR++;
            }
            else if (a[currR][currC] == 'B')
            {
                currC--;
            }
            else if (a[currR][currC] == 'T')
            {
                currC++;
            }
        }
        if (win)
            cout << 1 << " " << counts - 1;

        else
            cout << 1 << " " << vis[currR][currC] - 1 << " " << 0 << " " << counts - vis[currR][currC];

        cout << '\n';
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