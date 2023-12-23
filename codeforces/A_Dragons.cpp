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
    int super, girl;
    cin >> girl >> super;
    vector<pii> v;
    for (int i = 0; i < super; i++)
    {
        int flandre, scarlet;
        cin >> flandre >> scarlet;
        v.pb(mp(flandre, scarlet));
    }
    sort(v.begin(), v.end());
    bool can = true;
    for (int i = 0; i < super; i++)
    {
        if (girl <= v[i].first)
        {
            can = false;
            break;
        }
        else
            girl += v[i].se;
    }
    string z = (can) ? "YES" : "NO";
    cout << z;
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