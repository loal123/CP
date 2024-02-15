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
    ll n;
    cin >> n;
    ll a[n];
    ll counts = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        counts += abs(a[i]);
    }
    ll curr = 0;
    bool have = false;
    for (ll i = 0; i < n; i++)
    {
        if (!have)
        {
            if (a[i] < 0)
            {
                curr++;
                have = true;
            }
        }
        else
        {
            if (a[i] > 0)
                have = false;
        }
    }
    cout << counts << " " << curr << endl;
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