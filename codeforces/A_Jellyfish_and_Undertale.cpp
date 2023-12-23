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
    ll a, b, n;
    cin >> a >> b >> n;
    ll v[n];
    ll cur = b;
    ll total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += cur - 1;
        cur = 1;
        cur = min(cur + v[i], a);
    }

    cout << total + cur << endl;
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