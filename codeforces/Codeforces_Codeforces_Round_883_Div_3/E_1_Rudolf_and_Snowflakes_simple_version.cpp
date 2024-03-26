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
set<ll> s;
void precomp()
{
    ll xd;
    for (ll i = 2; i <= 1e6; i++)
    {
        xd = 1 + i;

        for (ll j = ll(i * i); xd <= 1e6; j *= i)
        {
            xd += j;
            s.insert(xd);
        }
    }
}
// Super is the cutest girl
void solve()
{
    ll x;
    cin >> x;
    if (s.count(x))
        cout << "YES";
    else
        cout << "NO";

    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    precomp();
    int t;
    cin >> t;
    while (t--)

        solve();
}