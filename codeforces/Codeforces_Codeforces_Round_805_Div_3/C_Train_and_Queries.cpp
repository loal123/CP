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
    int n, q;
    cin >> n >> q;
    map<int, vi> m;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x].pb(i);
        s.insert(x);
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (!s.count(a) || !s.count(b))
        {
            cout << "NO" << endl;
            continue;
        }
        if (m[a][0] < m[b][SZ(m[b]) - 1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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
    {

        solve();
    }
}