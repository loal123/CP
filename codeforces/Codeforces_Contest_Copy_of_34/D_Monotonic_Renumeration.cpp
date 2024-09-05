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
const ll mod = 998244353;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    vl v(n);
    vl dp(n + 1, 0);
    ll curr = 1;
    map<ll, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]] = i;
    }
    set<int> s;
    s.insert(v[0]);
    for (int i = 0; i < n; i++)
    {
        if (SZ(s) == 0)
        {
            curr *= 2LL;
        }
        s.insert(v[i]);
        curr %= mod;

        if (m[v[i]] == i)
            s.erase(v[i]);
    }
    cout << curr << '\n';
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