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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int f[1000001];
    memset(f, 0, sizeof(f));
    f[0] = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            f[i] = f[i - 1];
            int left = j - a[i - 1];
            if (left >= 0)
            {
                (f[i][j] += f[i][left]) %= mod;
            }
        }
    }

    cout << f[n][k];
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