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
    int n, p;
    cin >> n >> p;
    vi v1;
    vi v2;

    for (int i = 0; i < p - 1; i++)
    {
        if (i % 2 == 0)
        {
            v1.pb(0);
            v2.pb(1);
        }
        else
        {
            v2.pb(0);
            v1.pb(1);
        }
    }
    for (int i = p - 1; i < n; i++)
    {
        if (p % 2 == 0)
        {
            v1.pb(1);
            v2.pb(0);
        }
        else
        {
            v2.pb(1);
            v1.pb(0);
        }
    }
    for (auto i : v1)
        cout << i;

    cout << endl;

    for (auto i : v2)
        cout << i;
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