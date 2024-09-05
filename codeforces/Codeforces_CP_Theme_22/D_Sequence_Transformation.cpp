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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    if (n <= 3)
    {
        for (int i = 1; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << n;
        return;
    }
    for (int i = 1; i < n; i++)
    {
    }

    int curr = 1;
    int xd = n;
    vi have;
    for (int i = 1; i <= n; i++)
    {
        have.pb(i);
    }

    while (SZ(have) > 3)
    {
        vi temp;
        for (int i = 0; i < SZ(have); i += 2)
        {
            cout << curr << " ";
            temp.pb(have[i]);
        }

        curr <<= 1;

        have = temp;
    }

    for (int i = 0; i < SZ(have); i++)
    {
        int xd = 0;
        for (int j = i; j < SZ(have); j++)
        {
            xd = gcd(xd, have[j]);
        }
        cout << xd << ' ';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}