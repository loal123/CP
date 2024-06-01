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
    ll x;
    cin >> x;
    ll mini, maxi;
    if (x & 1 || x <= 3)
    {
        cout << -1 << endl;
        return;
    }
    if (x % 4 == 0)
    {
        mini = x / 4;
    }
    else if (x % 4 == 2)
    {
        mini = x / 4;
    }

    if (x % 6 == 0)
        maxi = x / 6;
    else if (x % 6 == 2)
        maxi = (x - 8) / 6 + 2;
    else
        maxi = x / 6 + 1;

    swap(maxi, mini);

    cout << mini << " " << maxi << '\n';
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