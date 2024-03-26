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
int coins[1050];
int c[5] = {1, 3, 6, 10, 15};
void precomp()
{
    for (int i = 0; i < 1050; i++)
    {
        coins[i] = INF;
    }
    coins[0] = 0;
    for (int i = 0; i < 5; i++)
    {
        coins[c[i]] = 1;
    }
    for (int i = 1; i <= 1002; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            coins[i + c[j]] = min(coins[i + c[j]], coins[i] + 1);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    if (n <= 514)
        cout << coins[n] << endl;
    else
    {
        int mini = INF;
        int yeah = n / 15;
        int real = yeah;
        yeah *= 15;
        real -= 7;
        yeah -= 105;
        for (int i = yeah; i <= n; i += 15)
        {
            mini = min(coins[n - yeah] + real, mini);
            real++;
        }

        cout << mini << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    precomp();
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}