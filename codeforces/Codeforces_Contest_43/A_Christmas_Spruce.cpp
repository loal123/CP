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
vi adj[1005];
vi deg(1005);
vi p(1005);
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        x--;
        adj[x].pb(i);
        deg[x]++;
        deg[i]++;
        p[i] = x;
    }
    vi leaf(1005, 0);
    for (int i = 1; i < n; i++)
    {
        if (deg[i] == 1)
            leaf[p[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (deg[i] > 1)
        {
            if (leaf[i] < 3)
            {
                cout << "No\n";
                return;
            }
        }
    }
    cout << "Yes\n";
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