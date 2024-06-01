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
    int n;
    cin >> n;
    vector<pii> v(n);
    map<int, int> m;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi >> v[i].se;
        m[v[i].fi] = i + 1;
        maxi = max(maxi, v[i].fi);
    }
    sort(all(v));

    int mini = INF;
    vi maxiv(n + 1);
    for (int i = n - 1; i >= 0; --i)
    {
        mini = min(mini, v[i].se);
        maxiv[i] = mini;
    }

    vi curr;
    for (int i = 0; i < n - 1; i++)
    {
        if (maxiv[i + 1] > v[i].se)
            curr.pb(m[v[i].fi]);
    }
    curr.pb(m[maxi]);
    sort(all(curr));
    cout << curr.size() << endl;
    for (auto i : curr)
        cout << i << " ";
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