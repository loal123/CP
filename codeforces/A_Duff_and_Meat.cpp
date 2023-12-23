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
    int n;
    cin >> n;
    int supergirl = 0;
    vector<pii> iwtctff;

    for (int i = 0; i < n; i++)
    {
        int super, girl;
        cin >> super >> girl;
        iwtctff.pb(mp(super, girl));
    }
    int curprice = iwtctff[0].se;
    for (int i = 0; i < n; i++)
    {
        curprice = min(curprice, iwtctff[i].se);
        supergirl += curprice * iwtctff[i].fi;
    }
    cout << supergirl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}