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
    vector<pii> v;
    vector<pii> iwtctff;
    int supercutegirl = 0;

    for (int i = 0; i < n; i++)
    {
        int super, girl;
        cin >> super >> girl;
        if (super > 0)
            v.pb(mp(super, girl));
        else
            iwtctff.pb(mp(super, girl));
    }
    sort(v.begin(), v.end());

    sort(iwtctff.rbegin(), iwtctff.rend());
    for (int i = 0; i < min(iwtctff.size(), v.size()); i++)
    {
        supercutegirl += v[i].second;
        supercutegirl += iwtctff[i].second;
    }
    if (iwtctff.size() > v.size())
    {
        supercutegirl += iwtctff[v.size()].second;
    }
    else if (iwtctff.size() < v.size())
    {
        supercutegirl += v[iwtctff.size()].second;
    }
    cout << supercutegirl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}