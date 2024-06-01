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
void ask(int x)
{
    cout << "- " << x << endl;
}
void solve()
{
    int test;
    cin >> test;
    int amount = 0;
    int x;
    x = __builtin_popcount(test);

    int ans = 0;
    while (1)
    {
        int bruh = x - 1;
        ask((1 << (bruh)));
        amount++;
        ans += (1 << (bruh));
        test -= (1 << (bruh));
        x = __builtin_popcount(test);
        if (x == 0)
        {
            cout << ans << " " << amount << endl;
            return;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}