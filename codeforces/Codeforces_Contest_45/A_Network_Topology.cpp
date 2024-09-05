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
    vi deg(n, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        deg[a]++;
        deg[b]++;
    }
    bool bus = 1, ring = 1, star = 1;
    int twocount = 0;
    int onecount = 0;
    int othercount = 0;
    for (int i = 0; i < n; i++)
    {
        if (deg[i] == 2)
        {
            twocount++;
        }
        else if (deg[i] == 1)
            onecount++;
        else
            othercount++;
    }

    if (onecount == n - 1 && othercount == 1)
    {
        cout << "star ";
    }
    else if (onecount == 2 && twocount == n - 2)
    {
        cout << "bus ";
    }
    else if (twocount == n)
    {
        cout << "ring ";
    }
    else
        cout << "unknown ";

    cout << "topology";
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