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
    string a;
    cin >> a;
    int n = 0;
    if (a[0] == 'a')
        n++;
    if (a[1] == 'b')
        n++;
    if (a[2] == 'c')
        n++;
    if (n == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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