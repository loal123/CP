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
    int minimal = 12;
    int minpos;
    int total = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < minimal)
        {
            minimal = a[i];
            minpos = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == minpos)
        {
            a[i]++;
        }
        total *= a[i];
    }
    cout << total << endl;
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