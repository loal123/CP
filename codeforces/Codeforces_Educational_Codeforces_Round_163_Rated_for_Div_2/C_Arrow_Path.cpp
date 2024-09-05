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
vector<vector<bool>> dp;
vector<string> s(2);
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
map<char, int> direction;
int n;

void recur(int i, int j)
{

    if (dp[i][j])
        return;

    dp[i][j] = 1;

    for (int x = 0; x < 4; x++)
    {
        int ix = i + dx[x];
        int jx = j + dy[x];
        if (ix > 1 || ix < 0 || jx < 0 || jx >= n)
            continue;
        if (s[ix][jx] == '>')
        {
            recur(ix, jx + 1);
        }
        else
            recur(ix, jx - 1);
    }
}
void solve()
{

    cin >> n;

    cin >> s[0] >> s[1];
    dp = vector<vector<bool>>(2, vector<bool>(n, 0));

    recur(0, 0);

    if (dp[1][n - 1])
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    direction['>'] = 1;

    direction['<'] = 3;
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}