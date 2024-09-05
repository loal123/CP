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
ll n, a, b, c;
ll finds(ll N, ll val, ll operations)
{
    ll mini = INFF;
    if (operations == 15)
        return INFF;

    if (N % 4 == 0)
        return val;

    mini = min(mini, finds(N + 1, val + a, operations + 1));
    mini = min(mini, finds(N + 2, val + b, operations + 1));
    mini = min(mini, finds(N + 3, val + c, operations + 1));

    return mini;
}

void solve()
{

    cin >> n >> a >> b >> c;

    cout << finds(n, 0, 0) << '\n';
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