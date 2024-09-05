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
    int n, m, k;
    cin >> n >> m >> k;
    map<string, vector<string>> inst;

    vector<pair<string, string>> v(n);
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (i >= m)
            v[i].fi = a, v[i].se = b;
        if (SZ(inst[b]) == 0)
            inst[b].pb(a);
    }
    vector<string> ans;
    for (auto i : v)
    {
        if (ans.size() == k)
            break;
        if (SZ(inst[i.se]) == 0)
            continue;
        if (i.fi == inst[i.se][0])
        {
            ans.pb(i.fi);
        }
    }
    cout << SZ(ans) << '\n';
    for (auto i : ans)
        cout << i << '\n';
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