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
    int n, k;
    cin >> n >> k;
    int a[n];
    vector<vi> v(k + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[a[i]].pb(i);
    }
    int x = n - 1, y = 0;
    vi yeah;
    for (int i = k; i >= 1; i--)
    {

        if (v[i].empty())
        {
            yeah.pb(0);
            continue;
        }
        x = min(x, v[i][0]);
        y = max(y, v[i][SZ(v[i]) - 1]);
        yeah.pb((y - x + 1) * 2);
    }
    for (int i = SZ(yeah) - 1; i >= 0; i--)
    {
        cout << yeah[i] << " ";
    }

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