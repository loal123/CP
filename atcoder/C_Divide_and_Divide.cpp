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
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    ll x;
    cin >> x;
    ll idk = __lg(x);
    cout << (ll)x * idk + (x - (1LL << idk)) * 2;

    // 2 (2)

    // 3
    // 5

    // 4
    // 6

    // 5
    // 2 3 (5)
    // 3 (7)
    // 9

    // 6
    // 3 3 6
    // 1 2 1 2 12
    // 16

    // 7
    // 3 4
    // 2 2 2
    // 19
    // 8
    // 4 4 8
    // 2 2 2 2 16
    // 24
    // 9
    // 4 5 (9)
    // 5 (17)
    // 2 3 (22)
    // 10
    // 5 5
    // 2 3 2 3
    // 1 1  1 2 1 1
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