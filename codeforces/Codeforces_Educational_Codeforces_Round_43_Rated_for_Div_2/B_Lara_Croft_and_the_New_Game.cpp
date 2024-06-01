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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<pii> v;
    if (k < n)
    {
        cout << k + 1 << " " << 1;
    }
    else if (k < n + m - 1)
    {
        cout << n << " " << k - n + 2;
    }
    else
    {
        ll xd = k - (n + m) + 2;

        if (m == 2)
        {
            cout << n - xd << " " << 2;
            return;
        }
        ll bruh = xd / 4LL;

        ll rem = xd % 4LL;
        if (rem == 0)
        {
            cout << n - (bruh * 2) << " " << m;
        }
        else if (rem == 1)
        {
            cout << n - (bruh * 2) - 1 << " " << m;
        }
        else if (rem == 2)
        {
            cout << n - (bruh * 2) - 1 << " " << 2;
        }
        else
        {
            cout << n - (bruh * 2) - 2 << " " << 2;
        }
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