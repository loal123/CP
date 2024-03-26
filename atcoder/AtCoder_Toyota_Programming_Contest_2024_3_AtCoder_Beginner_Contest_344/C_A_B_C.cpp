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
    int n, m, l;
    cin >> n;
    ll a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;

    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    cin >> l;
    int c[l];
    for (int i = 0; i < l; i++)
        cin >> c[i];

    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < l; k++)
            {
                s.insert(a[i] + b[j] + c[k]);
            }
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;

        cout << (s.count(x) ? "Yes\n" : "No\n");
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