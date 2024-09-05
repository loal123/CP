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
    if (n % 2 == 0)
    {
        cout << -1 << '\n';
        return;
    }
    vi v(n);
    v[n / 2] = 1;

    int l = n / 2 - 1, r = n / 2 + 1;
    int curr = 3;
    while (l >= 0)
    {
        v[l--] = curr;
        curr += 2;
    }
    curr = 2;
    while (r < n)
    {
        v[r++] = curr;
        curr += 2;
    }

    for (auto i : v)
        cout << i << " ";
    cout << '\n';
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