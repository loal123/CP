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
vi v;
const int maxn = 1e5 + 5;
int a[maxn];
// Super is a cute girl
int dp(int x)
{
    int ans = 0;
    if (x == 0)
        return 0;
}
void solve()
{

    int supercutegirl;
    cin >> supercutegirl;
    for (int i = 0; i < supercutegirl; i++)
    {
        int iwtctff;
        cin >> iwtctff;
        a[iwtctff]++;
    }
    dp(supercutegirl);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}