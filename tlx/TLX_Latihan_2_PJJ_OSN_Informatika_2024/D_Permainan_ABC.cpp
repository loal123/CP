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
    vl fib;
    fib.pb(1);
    fib.pb(2);
    int curr = 2;
    while (fib.back() < INF)
    {
        fib.pb(fib[curr - 1] + fib[curr - 2]);
        curr++;
    }
    int sz = SZ(fib);
    for (int i = 1; i < sz; i++)
    {
        if (n % fib[i] == 0)
        {
            cout << n / fib[i] * fib[i - 1];
            return;
        }
    }
    cout << -1 << '\n';
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