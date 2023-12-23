#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const int maxn = 1e6 + 5;
int memo[maxn];
vector<int> v;
int dp(int x)
{
    if (x == 0)
        return 0;
    if (x <= -1)
        return INF;

    if (memo[x] != -1)
    {
        return memo[x];
    }
    int best = INF;
    for (auto i : v)
    {
        best = min(best, dp(x - i) + 1);
    }
    return memo[x] = best;
}
void solve()
{

    int n, x;
    cin >> n >> x;
    for (int i = 0; i < maxn; i++)
    {
        memo[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;

        v.push_back(z);
    }
    int coins = dp(x);
    if (coins == INF)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << coins << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}