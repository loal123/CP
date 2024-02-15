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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
ll modpower(int x, int n, int m)
{
    if (n == 0) // base case
        return 1 % m;
    long long u = modpower(x, n / 2, m);
    u = (u * u) % m;
    if (n % 2 == 1) // when 'n' is odd
        u = (u * x) % m;
    return u;
}

// driver function

void solve()
{
    int x, y, m;
    cin >> x >> y >> m;
    ll yeah = modpower(x, y - 1, m);
    ll counts = modpower(x, yeah, m);
    // y--;
    // while (y > 0)
    // {
    //     counts = modpower(counts, x, m);
    //     y--;
    // }
    cout << counts;
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