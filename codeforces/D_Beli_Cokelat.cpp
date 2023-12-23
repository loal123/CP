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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    vector<pll> v;
    ll super, girl;
    cin >> super >> girl;

    for (int i = 0; i < super; i++)
    {
        ll flandre, scarlet;
        cin >> flandre >> scarlet;
        v.pb(mp(flandre, scarlet));
    }
    sort(v.begin(), v.end());
    int counts = 0;
    for (int i = 0; i < super; i++)
    {
        if (v[i].fi * v[i].se <= girl)
        {
            counts += v[i].se;
            girl -= v[i].fi * v[i].se;
        }
        else
        {
            counts += girl / v[i].fi;
            break;
        }
    }
    cout << counts;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}