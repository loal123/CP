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
    int n;
    cin >> n;
    int a[n];
    int total = 0;
    int maximum = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        total += a[i];
    }
    maximum = a[n - 1];
    if (n == 1)
    {
        cout << 2 * maximum - 1;
    }
    else
    {
        if (total + 1 < maximum || total < maximum)
        {
            cout << total + maximum + (maximum - total - 1) * 2;
        }
        else if (total == maximum || total + 1 == maximum)
        {
            cout << total + maximum;
        }
        else
        {
            cout << total + maximum + (total - maximum - 1) * 2;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}