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
    int n;
    cin >> n;
    if (n < 1200)
        cout << 1200;
    else if (n < 1400)
        cout << 1400;
    else if (n < 1600)
        cout << 1600;
    else if (n < 1900)
        cout << 1900;
    else if (n < 2100)
        cout << 2100;

    else if (n < 2300)
        cout << 2300;
    else if (n < 2400)
        cout << 2400;
    else if (n < 2600)
        cout << 2600;
    else
        cout << 3000;
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