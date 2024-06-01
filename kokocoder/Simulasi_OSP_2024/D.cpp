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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    ll n, a, b, k;
    cin >> n >> a >> b >> k;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll prefmax[n + 1];
    ll suffmin[n + 1];
    prefmax[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefmax[i] = max(prefmax[i - 1], v[i]);
    }
    suffmin[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffmin[i] = min(suffmin[i + 1], v[i]);
    }
    ll maxi = -INFF;
    for (int i = 0; i < n - 1; i++)
    {
        if (prefmax[i] - suffmin[i + 1] <= k)
        {
            maxi = max(prefmax[i] - suffmin[i + 1], maxi);
        }
    }
    if (maxi == -INFF)
    {
        cout << "TIDAK MUNGKIN";
    }
    else
        cout << maxi;
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