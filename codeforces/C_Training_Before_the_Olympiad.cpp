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
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll counts = 0;
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        counts += a[i];
        if (a[i] % 2 == 1)
            odd++;
        else
            even++;

        if (even > 0)
        {
            if (odd % 3 == 0)
            {
                cout << counts - odd / 3;
            }
            else if (odd % 3 == 1)
                cout << counts - odd / 3 - 1;
            else
                cout << counts - odd / 3;
        }
        else
        {
            if (odd > 2)
            {
                if (odd % 3 == 1)
                    cout << counts - odd / 3 - 1;
                else
                    cout << counts - odd / 3;
            }
            else
                cout << counts;
        }
        cout << " ";
    }
    cout << endl;
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