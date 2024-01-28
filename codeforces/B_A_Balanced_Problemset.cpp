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
// Super is the cutest girl

void solve()
{
    ll x, n;
    cin >> x >> n;
    vi div;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            div.pb(i);
    }
    int yeah = x / n;
    int mmm = div.size();
    for (int i = 0; i < mmm; i++)
    {
        if (div[i] != x / div[i])
            div.pb(x / div[i]);
    }
    sort(all(div));

    int a = 0;
    int b = SZ(div) - 1;
    int yes = lower_bound(all(div), yeah) - div.begin();
    if (div[yes] != yeah)
        yes--;

    cout << div[yes] << endl;
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