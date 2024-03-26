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
    ll n, p, q;
    cin >> n >> p >> q;
    vi v;
    ll a[n + 5];
    ll real[n + 5];
    a[n + 1] = INFF;

    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        real[i] = a[i];
    }
    sort(a + 1, a + n + 1);
    map<ll, ll> m;
    ll r[n + 5];
    for (ll i = 1; i <= n; i++)
    {
        m[a[i]] = i;
    }
    ll j = 1;
    for (ll i = 1; i <= n; i++)
    {
        while (a[j + 1] - a[i] <= p && j <= n)
            j++;
        r[i] = j;
    }
    ll ans[n + 5];
    priority_queue<pll> pq;
    for (ll i = 1; i <= n; i++)
    {
        pq.push({r[i] - i + 1, r[i]});
        while (pq.top().se < i)
            pq.pop();
        ans[i] = pq.top().fi;
    }
    while (q--)
    {
        ll z;
        cin >> z;
        cout << ans[m[real[z]]] << '\n';
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