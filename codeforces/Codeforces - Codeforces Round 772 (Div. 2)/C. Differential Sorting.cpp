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
    stack<pii> st;
    stack<pii> ST;
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {

        cin >> a[i];
    }
    if (a[n - 1] > a[n])
    {
        cout << -1 << '\n';
        return;
    }
    if (a[n] >= 0)
    {
        cout << n - 2 << "\n";
        for (int i = 1; i <= n - 2; i++)
        {
            cout << i << " " << n - 1 << " " << n << '\n';
        }
    }
    else
    {
        cout << (is_sorted(a + 1, a + n + 1) ? 0 : -1) << '\n';
    }
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