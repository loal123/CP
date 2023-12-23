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
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(mp(z, i));
    }
    sort(v.rbegin(), v.rend());
    int a[n];
    int counts = 1;
    int supergirl = 1;
    a[v[0].se] = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i].fi == v[i - 1].fi)
        {
            supergirl++;
        }
        else
        {
            counts += supergirl;
            supergirl = 1;
        }
        a[v[i].se] = counts;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}