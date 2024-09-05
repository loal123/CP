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
void ans(int val, int from, int to)
{
    cout << val << " ml. from cup #" << from << " to cup #" << to << ".\n";
}
void solve()
{
    int n;
    cin >> n;
    set<int> s;
    vector<pii> v(n);
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi;
        s.insert(v[i].fi);
        cnt[v[i].fi]++;
        v[i].se = i + 1;
    }
    if (SZ(s) == 1)
    {
        cout << "Exemplary pages.\n";
        return;
    }
    if (SZ(s) > 3)
    {
        cout << "Unrecoverable configuration.\n";
        return;
    }
    sort(all(v));

    if (cnt[v[0].fi] > 1 || cnt[v[n - 1.].fi] > 1 || v[n - 1].fi % 2 != v[0].fi % 2)
    {
        cout << "Unrecoverable configuration.\n";
        return;
    }

    int diff = v[n - 1].fi - v[0].fi;
    diff /= 2;
    if (n == 2)
    {
        ans(diff, v[0].se, v[n - 1].se);
    }
    else
    {
        if (v[0].first + diff != v[1].fi)
        {
            cout << "Unrecoverable configuration.\n";
            return;
        }
        ans(diff, v[0].se, v[n - 1].se);
    }
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