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
    int n, s;
    cin >> n >> s;
    vector<pii> v;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.pb(mp(x, y));
    }
    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++)
    {
        total += s - v[i].fi;
        s = v[i].fi;
        if (total < v[i].se)
            total += v[i].se - total;
    }
    cout << total + s;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}