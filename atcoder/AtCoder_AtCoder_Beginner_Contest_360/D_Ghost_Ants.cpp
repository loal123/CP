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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    ll n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    vector<pll> pos(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pos[i].fi;
        if (s[i] == '1')
            pos[i].se = pos[i].fi + t;
        else
            pos[i].se = pos[i].fi - t;
    }
    vl newval;
    for (auto i : pos)
        newval.pb(i.se);
    sort(all(newval));
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            int newpos = upper_bound(all(newval), pos[i].se) - newval.begin();
            newpos--;

            ans += max(0, newpos - i);
        }
        else
        {
            int newpos = lower_bound(all(newval), pos[i].se) - newval.begin();
            ans += max(0, i - newpos);
        }
    }
    cout << ans / 2;
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