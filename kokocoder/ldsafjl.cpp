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
int s[10];
int t[10];
ll memo[10][10][10][10];
bool cant[10][10][10][10];
// Super is the cutest girl

ll searchess(int a, int b, int c, int d, ll counts, ll last)
{
    if (cant[a][b][c][d] == true)
        return INF;

    if (a == t[0] && b == t[1] && c == t[2] && d == t[3])
        return counts;

    if (counts > 40)
        return INF;

    if (memo[a][b][c][d] != -1)
        return memo[a][b][c][d];
    ll mini = INF;
    if (last != 2)
        mini = min(searchess((a + 1) % 10, b, c, d, counts + 1, 1), mini);
    if (last != 1)
        mini = min(searchess((a + 9) % 10, b, c, d, counts + 1, 2), mini);
    if (last != 4)
        mini = min(searchess(a, (b + 1) % 10, c, d, counts + 1, 3), mini);
    if (last != 3)
        mini = min(searchess(a, (b + 9) % 10, c, d, counts + 1, 4), mini);
    if (last != 6)
        mini = min(searchess(a, b, (c + 1) % 10, d, counts + 1, 5), mini);
    if (last != 5)
        mini = min(searchess(a, b, (c + 9) % 10, d, counts + 1, 6), mini);
    if (last != 8)
        mini = min(searchess(a, b, c, (d + 1) % 10, counts + 1, 7), mini);
    if (last != 7)
        mini = min(searchess(a, b, c, (d + 9) % 10, counts + 1, 8), mini);

    return memo[a][b][c][d] = mini;
}
void solve()
{
    memset(memo, -1, sizeof(memo));
    memset(cant, 0, sizeof(cant));

    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cin >> t[i];
    }
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int y1, y2, y3, y4;
        cin >> y1 >> y2 >> y3 >> y4;
        cant[y1][y2][y3][y4] = true;
    }
    ll bruh1 = s[0];
    ll bruh2 = s[1];
    ll bruh3 = s[2];
    ll bruh4 = s[3];
    ll yeah = searchess(bruh1, bruh2, bruh3, bruh4, 0, -1);
    if (yeah == INF)
        cout << -1 << '\n';

    else
        cout << yeah << '\n';

    cout << memo[t[0]][t[1]][t[2]][t[3]];
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