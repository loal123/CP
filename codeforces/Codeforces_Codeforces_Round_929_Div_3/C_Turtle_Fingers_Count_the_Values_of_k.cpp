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
    ll a, b, l;
    cin >> a >> b >> l;
    set<ll> s;
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            ll yeah = (ll)pow(a, i) * pow(b, j);
            if (yeah > l)
                break;
            if (l % yeah == 0)
                s.insert(l / yeah);
        }
    }
    cout << s.size() << "\n";
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