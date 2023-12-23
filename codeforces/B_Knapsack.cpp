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
int dp(int x)
{
}
void solve()
{
    vector<pii> v;
    int super, girl;
    cin >> super >> girl;
    for (int i = 0; i < girl; i++)
    {
        int idk, bro;
        cin >> idk >> bro;
        v.pb(mp(idk, bro));
    }
    int dp[girl + 1][super + 1];

    for (int i = 0; i <= girl; i++)
    {
        for (int j = 0; j <= super; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else
            {
                if (v[i - 1].fi <= j)
                {
                    dp[i][j] = max(dp[i - 1][j - v[i - 1].fi] + v[i - 1].se, dp[i - 1][j]);
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
    }
    for (int i = 0; i <= girl; i++)
    {
        for (int j = 0; j <= super; j++)
        {
            cout << dp[i][j] << "  ";
        }
        cout << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}