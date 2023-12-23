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
const int maxk = 105;
// Super is a cute girl
vector<pii> v;
bool done[maxk][2005] = {false};
int memo[maxk][2005];
bool used[maxk][2005];
int dp(int i, int c)
{
    if (i == 0)
    {
        return 0;
    }
    int picked = 0;
    if (done[i][c])
        return memo[i][c];
    int best = dp(i - 1, c);
    if (c > v[i].fi)
    {
        best = max(best, dp(i - 1, c - v[i].fi + v[i].se));
    }
    done[i][c] = true;
    memo[i][c] = best;
    return best;
}
void solve()
{

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        int w, h;
        cin >> w >> h;
        v.pb(mp(w, h));
    }
    cout << dp(k, n);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}