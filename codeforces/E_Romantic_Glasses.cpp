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
void solve()
{
    int n;
    cin >> n;
    vi v;
    ll counts = 0;
    bool can = false;
    map<ll, ll> m;
    m[0] = 1;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        if (i % 2 == 1)
            z = -z;

        counts += z;
        v.pb(counts);
        if (m[counts])
            can = true;
        else
            m[counts]++;
    }

    cout << (can ? "YES" : "NO");
    cout << '\n';
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