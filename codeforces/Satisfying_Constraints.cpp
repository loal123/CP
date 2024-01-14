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
    ll mini = -INF;
    ll maxi = INF;
    vl cant;
    for (int i = 0; i < n; i++)
    {
        ll a, x;
        cin >> a >> x;
        if (a == 1)
        {
            mini = max(x, mini);
        }
        else if (a == 2)
        {
            maxi = min(x, maxi);
        }
        else
        {
            cant.pb(x);
        }
    }
    ll cannot = 0;
    for (auto i : cant)
    {
        if (i >= mini && i <= maxi)
            cannot++;
    }
    if (maxi < mini)
        cout << 0 << endl;
    else
        cout << maxi - mini - cannot + 1 << endl;
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