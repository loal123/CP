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
const int maxn = 1005;
int wall[maxn][maxn];
int diff[maxn][maxn];
// Super is a cute girl
void solve()
{
    memset(wall, 0, sizeof(wall));
    memset(diff, 0, sizeof(diff));
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ;
        wall[x2][y2]++;

        wall[x2][y1 - 1]++;
        wall[x1 - 1][y2]++;
        wall[x1 - 1][y1 - 1]++;
    }
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