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
vector<string> bag[105];
int memo[105][105];
string t;
int n;

void solve()
{

    cin >> t;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        while (x--)
        {
            string z;
            cin >> z;
            bag[i].pb(z);
        }
    }
    int dp[105][105];
    for (int i = 0; i < 105; i++)
    {
        for (int j = 0; j < 105; j++)
            dp[i][j] = INF;
    }
    dp[0][0] = 0;
    int m = SZ(t);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            for (auto k : bag[i])
            {
                if (k == t.substr(j, SZ(k)))
                    dp[i + 1][j + SZ(k)] = min(dp[i + 1][j + SZ(k)], dp[i][j] + 1);
            }
        }
    }
    cout << (dp[n][SZ(t)] != INF ? dp[n][SZ(t)] : -1);
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