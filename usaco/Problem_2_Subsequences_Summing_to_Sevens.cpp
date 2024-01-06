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
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;

    int remainder = 0;
    int a[7];
    memset(a, -1, sizeof(a));
    int maximal = 0;
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int z;
        cin >> z;
        remainder = (remainder + z) % 7;

        if (a[remainder] == -1)
            a[remainder] = i;
        else
        {
            maximal = max(maximal, i - a[remainder]);
        }
    }
    cout << maximal;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    // int t; cin >> t; while(t--)
    solve();
}