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
    ll n, x;
    cin >> n >> x;
    bool can = true;
    vl v1, v2, v3;
    ll yeah = 0;

    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        v1.pb(z);
    }
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        v2.pb(z);
    }
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        v3.pb(z);
    }
    for (int i = 0; i < n; i++)
    {
        if ((v1[i] & x) != v1[i])
            break;

        yeah |= v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((v2[i] & x) != v2[i])
            break;

        yeah |= v2[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((v3[i] & x) != v3[i])
            break;

        yeah |= v3[i];
    }

    cout << (yeah == x ? "Yes" : "No") << '\n';
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