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
    ll n, m, j;
    cin >> n >> m >> j;
    vl a;
    vl b;
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        ll idk;
        cin >> idk;
        a.pb(idk);
    }
    for (int i = 0; i < n; i++)
    {
        ll idk;
        cin >> idk;
        b.pb(idk);
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        int y = b.size();
        while (x <= y)
        {
            int k = (x + y) / 2;
            if (b[k] >= a[i] - j && b[k] <= a[i] + j)
            {
                counts++;
                b.erase(b.begin() + k);
                break;
            }
            if (b[k] > a[i] + j)
                y = k - 1;
            else if (b[k < a[i] - j])
                x = k + 1;
        }
        if (counts == min(n, m))
            break;
    }
    cout << counts;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}