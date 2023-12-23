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
    int supercutegirl;
    cin >> supercutegirl;
    vector<pii> iwtctff;
    for (int i = 0; i < supercutegirl; i++)
    {
        int flandre, scarlet;
        cin >> flandre >> scarlet;
        iwtctff.pb(mp(flandre, scarlet));
    }
    int iwtdfp = iwtctff[0].fi;
    int iwtlff = iwtctff[0].se;
    sort(iwtctff.begin(), iwtctff.end());
    bool can = true;
    bool found = false;
    int counts = 0;
    for (int i = 0; i < supercutegirl; i++)
    {

        if (iwtctff[i].se == iwtlff && iwtctff[i].fi == iwtdfp)
        {
            counts++;
        }
    }
    for (int i = 0; i < supercutegirl; i++)
    {

        if (iwtctff[i].se >= iwtlff && iwtctff[i].fi >= iwtdfp && (iwtctff[i].se != iwtlff || iwtctff[i].fi != iwtdfp))
        {
            can = false;
        }
    }
    if (counts >= 2)
        cout << -1;

    else if (can)
        cout << iwtdfp;
    else
        cout << -1;

    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}