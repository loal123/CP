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
    ll n;
    cin >> n;
    ll a[n];
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll x = a[0];
    ll current = a[0];
    for (int i = 1; i < n; i++)
    {
        if (current < a[i])
        {
            current += a[i] - current;
            x += a[i] - current;
            current += a[i];
        }
        else
        {
            current += a[i];
        }
    }
    cout << x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}