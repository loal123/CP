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
// Super is a cute girl
const int maxn = 1e5 + 5;

void solve()
{

    ll n;
    cin >> n;
    ll a[n];
    vi d(n);
    vi adj(n);
    bool vis[n];
    memset(vis, 0, sizeof(vis));
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            adj[i] = i + 1;
        }
        else if (i == n - 1)
            adj[i] = i - 1;
        else
        {
            if (a[i] - a[i - 1] < a[i + 1] - a[i])
                adj[i] = i - 1;
            else
                adj[i] = i + 1;
        }
    }
    vi prefp(n + 1);
    vi prefn(n + 1);
    prefp[0] = 0;
    prefn[n] = 0;
    int counts = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (adj[i] == i + 1)
            counts++;
        else
            counts += a[i + 1] - a[i];
        prefp[i + 1] = counts;
    }
    counts = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (adj[i] == i - 1)
            counts++;
        else
            counts += a[i] - a[i - 1];

        prefn[i] = counts;
    }

    ll q;
    cin >> q;

    while (q--)
    {
        ll ans = 0;
        ll x, y;
        cin >> x >> y;

        if (x < y)
        {
            cout << prefp[y - 1] - prefp[x - 1];
        }
        else
        {
            cout << prefn[y] - prefn[x];
        }
        cout << '\n';
    }
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