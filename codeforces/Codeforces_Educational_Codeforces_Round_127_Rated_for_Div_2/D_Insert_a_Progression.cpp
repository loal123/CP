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
    int n, x;
    cin >> n >> x;
    int a[n];
    int maxi = -1;
    int mini = INF;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxi = max(a[i], maxi);
        mini = min(a[i], mini);
    }
    for (int i = 0; i < n - 1; i++)
    {
        ans += abs(a[i] - a[i + 1]);
    }
    int minans = INF;
    int minanss = INF;
    minans = min(abs(x - a[0]), minans);
    minans = min(abs(a[0] - 1), minans);
    minanss = min(abs(a[n - 1] - 1), minanss);
    minanss = min(abs(a[n - 1] - x), minanss);
    for (int i = 0; i < n; i++)
    {
        minans = min(minans, abs(a[i] - 1));
        minanss = min(minanss, abs(a[i] - x));
    }
    reverse(a, a + n);
    for (int i = 0; i < n; i++)
    {
        minans = min(minans, abs(a[i] - 1));
        minanss = min(minanss, abs(a[i] - x));
    }

    cout << ans + minans + minanss + x - 1 << endl;
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