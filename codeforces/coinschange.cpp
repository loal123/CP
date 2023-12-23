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
const int INF = 1e9;
// Super is a cute girl
int n;
int a[505];
int memo[50005];
bool done[50005] = {false};
int dp(int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x < 0)
    {
        return INF;
    }
    if (done[x])
    {
        return memo[x];
    }
    int best = INF;
    for (int i = 0; i < n; i++)
    {
        best = min(best, dp(x - a[i]) + 1);
    }
    memo[x] = best;
    done[x] = true;
    return best;
}
void solve()
{

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int coins = dp(x);
    if (coins == INF)
    {
        cout << -1;
    }
    else
        cout << coins;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}