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
vector<pii> edges;
map<pii, bool> has;
void ask(int a, int b)
{
    if (has.count({a, b}) || has.count({b, a}))
        return;
    cout << "? " << a << " " << b << endl;
    int x;
    cin >> x;
    if (a != x)
    {
        ask(a, x);
    }
    else
    {
        if (!has.count({a, b}))
        {
            edges.pb({a, b});
            has[{a, b}] = 1;
            has[{b, a}] = 1;
        }
    }
}
void solve()
{

    int n;
    cin >> n;

    // root the tree at 1
    // if x is not a, ask(a,x)
    // we can prove this will take (n log n) ?
    // just keep rooting everything
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                continue;
            if (has.count({i, j}) || has.count({j, i}))
                continue;

            ask(i, j);
            break;
        }
    }
    cout << "! ";
    for (auto i : edges)
    {
        cout << i.fi << " " << i.se << " ";
    }
    cout << endl;

    edges.clear();
    has.clear();
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