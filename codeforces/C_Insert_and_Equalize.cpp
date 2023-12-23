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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    ll n;
    cin >> n;
    vi a(n);
    int maxi = -1;
    if (n != 1)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxi = max(maxi, a[i]);
        }
        ll diff;
        diff = abs(a[0] - a[1]);

        for (int i = 0; i < n - 1; i++)
        {

            diff = gcd(diff, abs(a[i] - a[i + 1]));
            if (diff == 0)
                diff = 1;
        }
        sort all(a);
        bool can = false;
        int yeah;

        for (int i = n - 1; i > 0; i--)
        {
            if (abs(a[i] - a[i - 1]) != diff)
            {
                yeah = a[i] - diff;
                can = true;
                break;
            }
        }
        if (can)
        {
        }
        else
        {
            yeah = maxi + diff;
            maxi = yeah;
        }
        ll counts = 0;
        for (int i = 0; i < n; i++)
        {
            counts += (maxi - a[i]) / diff;
        }
        counts += (maxi - yeah) / diff;

        cout << counts << endl;
    }

    else
        cout << 1 << endl;
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