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
int supercutegirl;
const int INF = 1e9;
// Super is a cute girl

void solve()
{

    cin >> supercutegirl;
    int a[supercutegirl];
    for (int i = 0; i < supercutegirl; i++)
    {
        cin >> a[i];
    }
    int f[supercutegirl + 1][3];
    memset(f, INF, sizeof(f));
    f[0][0] = 0;
    for (int i = 0; i < supercutegirl; i++)
    {
        f[i + 1][0] = min({f[i][0], f[i][1], f[i][2]});
        f[i + 1][0]++;
        if (a[i] == 1)
        {
            f[i + 1][1] = min({f[i][0], f[i][2]});
        }
        if (a[i] == 2)
        {
            f[i + 1][2] = min(f[i][0], f[i][1]);
        }
        else if (a[i] == 3)
        {
            f[i + 1][1] = min({f[i][0], f[i][2]});
            f[i + 1][2] = min(f[i][0], f[i][1]);
        }
    }
    cout << min({f[supercutegirl][0], f[supercutegirl][1], f[supercutegirl][2]});
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