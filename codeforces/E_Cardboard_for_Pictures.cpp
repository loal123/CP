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
    ll n, c;
    ll a[200005];

    cin >> n >> c;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = 1;
    ll y = 1e9;
    while (x <= y)
    {
        ll mid = (x + y) / 2;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total += (a[i] + mid * 2) * (a[i] + mid * 2);
            if (total > c)
                break;
        }
        if (total == c)
            cout << mid << '\n';

        if (total > c)
            y = mid - 1;
        else
            x = mid + 1;
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