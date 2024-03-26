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
    ll a, b, c;
    cin >> a >> b >> c;
    ll counts = 0;
    counts += a;
    counts += (b / 3);
    if (b % 3 != 0)
    {
        if ((b % 3) + c < 3)
        {
            cout << -1 << '\n';
            return;
        }
        c -= (3 - (b % 3));
        counts++;
    }
    counts += ((c + 2) / 3);

    cout << counts << endl;
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