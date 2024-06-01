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
    ll n, k;
    cin >> n >> k;
    vl v(k);
    ll f = n - k;
    for (ll i = 0; i < k; i++)
    {
        cin >> v[i];
    }
    ll LOW = INFF;

    for (ll i = k - 1; i > 0; i--)
    {
        if (LOW < v[i] - v[i - 1])
        {
            cout << "No\n";
            return;
        }
        LOW = v[i] - v[i - 1];
    }

    ll idk;
    if (v[0] > 0)
    {
        idk = (v[0] + (f)) / (f + 1);
    }
    else if (v[0] < 0)
    {
        idk = v[0] / (f + 1);
    }
    else
        idk = 0;

    if (idk <= LOW)
        cout << "Yes\n";
    else
        cout << "No\n";
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