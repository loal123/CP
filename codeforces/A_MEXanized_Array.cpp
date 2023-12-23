
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
// Super is a cute girl
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (k > x + 1 || n < k)
    {
        cout << -1;
    }
    else
    {
        n -= k;
        int counts = 0;
        for (int i = 0; i < k; i++)
        {
            counts += i;
        }
        for (int i = 0; i < n; i++)
        {
            if (x != k)
                counts += x;
            else
                counts += x - 1;
        }
        cout << counts;
    }
    cout << '\n';
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