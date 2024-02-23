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
const int maxn = 1e4 + 1;
int inv[maxn + 2];

void solve()
{
    deque<ll> dq;
    ll n, m;
    cin >> n >> m;

    vi yeah;
    ll products = 1;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        yeah.pb(z);
    }
    string s;
    cin >> s;
    int x = 0, y = n - 1;
    for (auto i : s)
    {
        if (i == 'L')
            x++;
        else
            y--;
    }
    reverse(all(s));
    vl v;
    products = 1;
    for (auto i : s)
    {
        if (i == 'L')
        {
            x--;
            products *= yeah[x];
        }
        else
        {
            y++;
            products *= yeah[y];
        }
        products %= m;

        v.pb(products);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    cout << endl;
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