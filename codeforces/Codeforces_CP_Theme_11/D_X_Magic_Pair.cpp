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
bool has = false;
ll a, b, x;
ll xd(ll a, ll b)
{
    if (b == 0)
        return a;

    if (b > a)
        swap(a, b);
    if ((x - (a % b)) % b == 0 && x <= a)
        has = true;

    return xd(b, a % b);
}
void solve()
{
    cin >> a >> b >> x;
    xd(a, b);

    if (has)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

    has = false;
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