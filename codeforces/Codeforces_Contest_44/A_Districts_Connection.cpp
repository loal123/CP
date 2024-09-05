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
    vi v(n);
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    if (SZ(s) == 1)
    {
        cout << "NO\n";
        return;
    }
    int curr = 0;
    int yeah = v[0];
    int another;
    vector<pii> ans;
    vi yeahv;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != yeah)
        {
            another = i + 1;
            ans.pb({1, i + 1});
        }
        else
        {
            curr++;
            yeahv.pb(i + 1);
        }
    }
    curr--;

    while (SZ(yeahv))
    {
        ans.pb({another, yeahv.back()});
        yeahv.pop_back();
    }
    cout << "YES\n";
    for (auto i : ans)
        cout << i.fi << " " << i.se << '\n';
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