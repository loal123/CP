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
const ll INF = 1e17 + 1;

// Super is a cute girl
void solve()
{
    vector<pair<int, string>> v;
    int supercutegirl;
    cin >> supercutegirl;

    ll dp[supercutegirl + 1][8];
    for (int i = 0; i < supercutegirl; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            dp[i][j] = INF;
        }
    }
    ll ans = INF;
    for (int i = 0; i < supercutegirl; i++)
    {
        int idk;
        string aa;
        cin >> idk >> aa;
        int bitmask = 0;
        for (int j = 0; j < 3; j++)
        {
            char c = 'C' - j;
            bool have = 0;

            for (char k : aa)
            {
                if (k == c)
                    have = 1;
            }
            if (have)
            {
                bitmask += (1 << j);
            }
        }
        for (int mask = 0; mask < 8; mask++)
        {
            dp[i + 1][mask] = min(dp[i + 1][mask], dp[i][mask]);
            
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}