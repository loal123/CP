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
    for (int &i : v)
        cin >> i;
    // just find b first, and then idk
    vi b;

    for (int i = 0; i < n - 1; i++)
    {
        b.pb(gcd(v[i], v[i + 1]));
    }
    int position = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (b[i] > b[i + 1])
        {
            position = i;
            break;
        }
    }

    int l = max(position - 5, 0);
    int r = min(position + 5, n);

    for (int i = l; i < r; i++)
    {

        vi x;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
                x.pb(v[j]);
        }
        vi y;
        for (int j = 0; j < n - 2; j++)
        {
            y.pb(gcd(x[j], x[j + 1]));
        }
        if (is_sorted(all(y)))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";

    // 4 3 12 3
    // 2 6 3 3 12
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