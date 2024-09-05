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
    vi v(n);
    vi bits(31, 0);
    int xd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        for (int j = 0; j <= 30; j++)
        {
            if (v[i] & (1 << j))
            {
                bits[j]++;
            }
        }
    }
    for (auto i : bits)
        xd = gcd(i, xd);

    if (xd == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << '\n';
        return;
    }

    vi ans;
    for (int i = 1; i * i <= xd; i++)
    {
        if (xd % i == 0)
        {
            ans.pb(i);
            if (i != xd / i)
                ans.pb(xd / i);
        }
    }
    sort(all(ans));

    for (auto i : ans)
        cout << i << ' ';

    cout << '\n';
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