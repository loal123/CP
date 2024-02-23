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
    int n;
    cin >> n;
    char c[n][n];
    vi v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> c[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int counts = 0;
        for (int j = 0; j < n; j++)
        {
            counts += c[i][j] - '0';
        }
        if (counts != 0)
            v.pb(counts);
    }
    int yeah = v[0];
    for (auto i : v)
    {
        if (i != yeah)
        {
            cout << "TRIANGLE\n";
            return;
        }
    }
    cout << "SQUARE\n";
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