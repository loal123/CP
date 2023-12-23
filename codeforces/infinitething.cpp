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
int a[1005];
// Super is a cute girl
int m = 0;
double recursion(int x, int k)
{
    double tota = 0;
    if (m >= k)
        return tota;
    else
    {

        return tota + a[k % x] / recursion(a[k % x + 1], k - 1);
    }
}
void solve()
{

    int n;
    cin >> n;
    int k = 150;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    double total = recursion(n, k);
    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}