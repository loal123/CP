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
    int n, k;
    cin >> n >> k;
    int curr = 0;

    // 10 10 10 -21
    // 1  1  1  -3
    // 1 = 1
    // 2 = 2 -1
    // 3 = 1 2
    // 4 = 2 2 -3
    // 5 = 2 2 -1
    // 6 = 2 2 2
    // 7 = 2 2 2 -5
    // 8 = 2 2 2 -3
    // 9 = 2 2 2 -1
    // 10 = 2 2 2 1

    int need = 0;
    while (need * (need + 1) / 2 <= k)
    {
        need++;
    }
    need--;
    int yeah = n - need - 1;
    for (int i = 0; i < need; i++)
    {
        cout << 2 << " ";
    }
    int xd = ((need + 1) * (need + 2) / 2);
    if (yeah != -1)
        cout << 1 - (xd - k) * 2 << ' ';

    for (int i = 0; i < yeah; i++)
    {
        cout << -1000 << " ";
    }
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