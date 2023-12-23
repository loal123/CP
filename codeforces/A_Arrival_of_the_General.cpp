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
    vector<pii> supergirl;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        supergirl.pb(mp(z, i));
    }
    sort(supergirl.begin(), supergirl.end());
    int minpos = 0;
    int maxpos = n + 1;
    for (int i = 0; i < n; i++)
    {
        if (supergirl[i].fi == supergirl[0].fi)
        {
            minpos = supergirl[i].se;
        }
        if (supergirl[n - 1 - i].fi == supergirl[n - 1].fi)
        {
            maxpos = supergirl[n - 1 - i].se;
        }
    }
    int supercutegirl = 0;
    if (maxpos > minpos)
    {
        supercutegirl--;
    }
    cout << supercutegirl + n - 1 - minpos + maxpos;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}