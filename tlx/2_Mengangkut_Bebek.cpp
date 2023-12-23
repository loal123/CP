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
#define all(v) ((v).begin(), (v).end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    ll k;
    cin >> k;
    vector<pll> v(k);
    for (int i = 0; i < k; i++)
    {
        ll z;
        cin >> z;
        v[i].se = z;
    }
    for (int i = 0; i < k; i++)
    {
        ll z;
        cin >> z;
        v[i].fi = z;
    }
    ll n;
    cin >> n;
    vl a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    sort(v.begin(), v.end());
    ll counts = 0;
    ll cur = 0;
    ll total = 0;
    ll index = 0;
    for (int i = 0; i < n; i++)
    {
        counts += a[i];
        index++;
        if (v[cur].se == index || i == n - 1)
        {
            total += counts * v[cur].fi;
            counts = 0;
            cur++;
            index = 0;
        }
    }
    cout << total;
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