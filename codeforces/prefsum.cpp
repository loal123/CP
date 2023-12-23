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
    vector<ll> v;
    int n;
    cin >> n;
    int q;
    cin >> q;
    ll total = 0;
    v.pb(0);
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        total += z;
        v.pb(total);
    }

    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        cout << v[b] - v[a] << '\n';
    }
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