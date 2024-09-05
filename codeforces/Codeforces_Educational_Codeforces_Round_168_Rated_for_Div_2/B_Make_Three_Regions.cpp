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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    char a[2][n];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    int cnt = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (a[i ^ 1][j] == '.' && a[i ^ 1][j - 1] == 'x' && a[i ^ 1][j + 1] == 'x' && a[i][j - 1] == '.' && a[i][j + 1] == '.')
                cnt++;
        }
    }
    cout << cnt << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}