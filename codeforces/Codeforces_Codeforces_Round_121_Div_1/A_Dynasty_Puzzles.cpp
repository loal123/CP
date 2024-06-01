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
int dp[26][26];
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
            if (i != j)
                dp[i][j] = -INF;
    }

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int val = SZ(s);
        int start = s[0] - 'a';
        int end = s[val - 1] - 'a';

        for (int j = 0; j < 26; j++)
        {

            dp[j][end] = max(dp[j][end], dp[j][start] + val);
        }
    }
    int maxi = 0;
    for (int i = 0; i < 26; i++)
    {
        maxi = max(maxi, dp[i][i]);
    }
    cout << maxi;
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