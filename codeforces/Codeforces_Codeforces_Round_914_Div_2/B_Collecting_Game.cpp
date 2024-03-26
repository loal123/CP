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
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    vector<pll> v(n);
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi;
        v[i].se = i;
        total += v[i].fi;
    }

    sort(all(v));
    int a[n];
    a[n - 1] = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        total -= v[i + 1].fi;
        if (total >= v[i + 1].fi)
            a[i] = a[i + 1];
        else
            a[i] = i;
    }
    int real[n];
    for (int i = 0; i < n; i++)
    {
        real[v[i].se] = a[i];
    }
    for (auto i : real)
        cout << i << " ";

    cout << '\n';

    // 1 2 4 5 20
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}