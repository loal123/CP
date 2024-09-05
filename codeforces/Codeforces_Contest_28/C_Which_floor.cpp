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
    int n, m;
    cin >> n >> m;
    int f[10005];
    memset(f, -1, sizeof(f));

    set<int> can;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        f[x] = y;
    }
    bool yeah = true;
    for (int i = 1; i <= 100; i++)
    {
        yeah = 1;
        for (int j = 1; j <= 10000; j++)
        {
            if (f[j] == -1)
                continue;
            if (j > i * f[j] || j <= i * f[j] - i)
                yeah = false;
        }
        if (yeah)
            can.insert(i);
    }
    set<int> xd;

    for (auto floors : can)

        xd.insert((n + (floors - 1)) / floors);

    if (SZ(xd) != 1)
    {
        cout << -1 << endl;
    }
    else
        for (auto i : xd)
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