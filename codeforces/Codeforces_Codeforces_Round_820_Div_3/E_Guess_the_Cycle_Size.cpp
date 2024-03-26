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
ll asks(ll a, ll b)
{
    ll x;

    cout << "? " << a << ' ' << b << endl;
    cin >> x;
    return x;
}
void solve()
{
    ll yeah = 50;
    vl def;
    vl prob;
    for (ll i = 2; i <= 26; i++)
    {
        ll ab = asks(1, i);
        ll ba = asks(i, 1);
        if (ab == -1)
        {
            cout << "! " << i - 1 << endl;
            return;
        }

        if (ab == ba)
            prob.pb(ab + ba);
        else
            def.pb(ba + ab);
    }

    if (SZ(def) == 0)
    {
        cout << "! " << prob[0] << endl;
    }
    else
        cout << "! " << def[0] << endl;
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