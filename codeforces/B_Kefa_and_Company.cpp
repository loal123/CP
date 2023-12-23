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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    ll n, d;
    cin >> n >> d;
    vector<pii> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.pb(mp(a, b));
    }
    sort all(v);
    ll maxi = -1;
    ll counts = v[0].se;
    int x = 0, y = 0;

    while (y != n)
    {

        if (abs(v[x].fi - v[y].fi) < d)
        {
            maxi = max(maxi, counts);
            y++;
            counts += v[y].se;
        }
        else
        {
            counts -= v[x].se;
            x++;
            if (abs(v[x].fi - v[y].fi) < d)
                maxi = max(maxi, counts);
        }
    }

    cout << maxi;
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