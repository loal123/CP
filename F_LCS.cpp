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
string s1, s2;
const int maxn = 3005;
int memo[maxn][maxn];
const ll mod = 1e9 + 7;
// Super is a cute girl
int dp(int s, int d)
{
    if (s == -1 || d == -1)
        return 0;
    if (memo[s][d] != 0)
    {
        return memo[s][d];
    }
    if (s1[s] == s2[d])

        return memo[s][d] = 1 + dp(s - 1, d - 1);
    else
    {
        return memo[s][d] = max(dp(s - 1, d), dp(s, d - 1));
    }
}
void solve()
{
    vector<char> v;
    memset(memo, 0, sizeof(memo));
    cin >> s1 >> s2;
    cout << dp(0, 0);
    int i = s1.size() - 1;
    int j = s2.size() - 1;
    while (i >= 0 && j >= 0)
    {
        if (memo[i][j] >= max(memo[i][j - 1], memo[i - 1][j]))
        {
            v.pb(s1[i]);
            i -= 1;
            j -= 1;
        }
        else if (i > 0 && memo[i - 1][j] > memo[i][j - 1])
        {

            i -= 1;
        }
        else
            j -= 1;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
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