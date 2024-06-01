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
int ask(int n)
{
    cout << "- " << n << endl;
    int x;
    cin >> x;
    return x;
}
void solve()
{
    int x;
    cin >> x;
    int curr = 0;
    int bits = 0;
    int ans = 0;
    while (1)
    {
        int prev = x;
        x = ask((1 << curr));
        ans += ((1 << (curr + x - prev + 1)));
        curr += x - prev + 1;

        bits += x - prev + 1;
        if (bits == x)
        {
            cout << "! " << ans << endl;
            return;
        }
    }
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