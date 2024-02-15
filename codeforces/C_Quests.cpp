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
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n];
    int amax = -1;
    int bmax = -1;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int sum = 0;
    int maxi = -1;
    int res = 0;
    for (int i = 0; i < min(n, k); i++)
    {
        sum += a[i];
        maxi = max(b[i], maxi);
        res = max(res, sum + maxi * (k - i - 1));
    }

    cout << res << endl;

    // 3 2 4
    // 1 100 3
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