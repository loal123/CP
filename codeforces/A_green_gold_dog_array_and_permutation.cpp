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
    vector<pii> tflc;
    vector<pii> iwtdfp;
    for (int i = 0; i < supercutegirl; i++)
    {
        int flandre;
        cin >> flandre;
        tflc.pb(mp(flandre, i));
    }
    sort(tflc.rbegin(), tflc.rend());
    for (int i = 0; i < supercutegirl; i++)
    {
        iwtdfp.pb(mp(tflc[i].se, i + 1));
    }
    sort(iwtdfp.begin(), iwtdfp.end());
    for (int i = 0; i < supercutegirl; i++)
    {
        cout << iwtdfp[i].se << " ";
    }
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