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
    map<ll, ll> M;
    map<ll, ll> M2;
    ll n, m;
    cin >> n >> m;
    ll a[n][m];

    ll maxi = -1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
            M[i - j] += a[i][j];
            M2[i + j] += a[i][j];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            maxi = max(maxi, M[i - j] + M2[i + j] - a[i][j]);
        }
    }

    cout << maxi << '\n';
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