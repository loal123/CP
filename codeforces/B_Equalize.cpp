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
    vi x(n);
    vi v;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(all(x));
    int prev = x[0];
    v.pb(x[0]);
    for (int i = 1; i < n; i++)
    {
        if (x[i] != prev)
            v.pb(x[i]);
        prev = x[i];
    }
    int maxi = 1;
    for (int i = 0; i < n; i++)
    {
        int yeah = lower_bound(all(v), v[i] + n - 1) - v.begin();
        if (yeah == SZ(v))
        {
            yeah--;
        }
        else if (v[yeah] != v[i] + n - 1)
            yeah--;
        maxi = max(yeah - i + 1, maxi);
    }
    cout << maxi << endl;
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